#include <iostream>

using namespace std;

class myclass {
	private:
		const int a=10;
		int b;
	public:
		myclass(int var_b){
			b = var_b;
		}
		
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
//default_constructor_example3.cpp(10): error C2789: 'myclass::a': an object of const-qualified type must be initialized
//default_constructor_example3.cpp(7): note: see declaration of 'myclass::a'
//default_constructor_example3.cpp(11): error C2166: l-value specifies const object
//default_constructor_example3.cpp(21): error C2512: 'myclass': no appropriate default constructor available
//default_constructor_example3.cpp(5): note: see declaration of 'myclass'