#include <iostream>

using namespace std;

class myclass {
	private:
		const int a;
		int b;
	public:
		myclass(int var_b){
			a = 10;
			b = var_b;
		}
		
		void printdata (void){
			cout <<"a="<<a<<" b="<<b;
		}
};

int main ( void ){
	myclass myobj(10);
	myobj.printdata();
	return 0;
}


//output
//=======
//default_constructor_example2.cpp(10): error C2789: 'myclass::a': an object of const-qualified type must be initialized
//default_constructor_example2.cpp(7): note: see declaration of 'myclass::a'
//default_constructor_example2.cpp(11): error C2166: l-value specifies const object
