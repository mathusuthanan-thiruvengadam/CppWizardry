#include <iostream>

using namespace std;

class myclass {
	private:
		int a;
		int b;
	public:
		myclass(){
			
		}
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
//a=10061725 b=15486976