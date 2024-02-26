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
//default_constructor_example4.cpp(20): error C2512: 'myclass': no appropriate default constructor available
//default_constructor_example4.cpp(5): note: see declaration of 'myclass'