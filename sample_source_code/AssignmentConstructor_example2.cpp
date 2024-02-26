#include <iostream>

using namespace std;

class myclass {
	private:
		int a, b;
		
	public:
		myclass(){
			
		}
	
		myclass (int vara, int varb){
			a = vara;
			b = varb;
		}

		void printdata (void){
			cout<<"a="<<a<<" b="<<b<<"\n";
		}
};

int main ( void ){
	myclass objA (10, 20);
	myclass objB;
	objB = objA;
	objA.printdata();
	objB.printdata();
	return 0;
}

//output
//======
//a=10 b=20
//a=10 b=20