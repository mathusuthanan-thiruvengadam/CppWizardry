#include <iostream>

using namespace std;

class myclass {
	private:
		int a;
		int b;
	public:
		myclass (int var_a, int var_b){
			a = var_a;
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
//default_constructor_example6.cpp(20): error C2512: 'myclass': no appropriate default constructor available
//default_constructor_example6.cpp(5): note: see declaration of 'myclass'