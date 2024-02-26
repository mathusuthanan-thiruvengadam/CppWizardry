#include <iostream>

using namespace std;

class myclass {
	private:
		const int a;
		int b;
	public:
		void printdata (void){
			cout <<"a="<<a<<" b="<<b;
		}
};

int main ( void ){
	myclass myobj;
	myobj.printdata();
	return 0;
}

//output
//=======
//default_constructor_example9.cpp(16): error C2280: 'myclass::myclass(void)': attempting to reference a deleted function
//default_constructor_example9.cpp(13): note: compiler has generated 'myclass::myclass' here
//default_constructor_example9.cpp(13): note: 'myclass::myclass(void)': function was implicitly deleted because 'myclass' has an uninitialized const-qualified data member 'myclass::a'
//default_constructor_example9.cpp(7): note: see declaration of 'myclass::a'