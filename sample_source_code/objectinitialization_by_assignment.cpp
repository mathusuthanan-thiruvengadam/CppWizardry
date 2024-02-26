#include <iostream>

using namespace std;

class myclass {
	private:
		int a, b;
	public:
		myclass (){
			
		}
	
		myclass(int var_a, int var_b){
			a = var_a;
			b = var_b;			
		}
		
		void printdata (void){
			cout <<"a="<<a<<" b="<<b<<"\n";
		}
			
};


int main (void){
	myclass objA;
	myclass objB = objA;
	
	objA.printdata();
	objB.printdata();
	return 0;
}


//output
//======
//a=1673152 b=10424320
//a=1673152 b=10424320
