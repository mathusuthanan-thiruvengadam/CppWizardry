#include <iostream>

using namespace std;

class myclass {
	
	private:
		int a, b;
	public:
		myclass(){
			
		}
		
		myclass (const myclass paramOjb){
			a = paramOjb.a;
			b = paramOjb.b;
		}
		
		void printdata ( void ){
			cout<<"a="<<a<<" b="<<b;
		}
	
};

int main ( void ){
	myclass objA;
	myclass objB(objA);
	return 0;
}


//output
//======
//copy_constructor_example1.cpp(14): error C2652: 'myclass': illegal copy constructor: first parameter must not be a 'myclass'
//copy_constructor_example1.cpp(5): note: see declaration of 'myclass'
//copy_constructor_example1.cpp(14): error C2333: 'myclass::myclass': error in function declaration; skipping function body
//copy_constructor_example1.cpp(27): error C2558: class 'myclass': no copy constructor available or copy constructor is declared 'explicit'