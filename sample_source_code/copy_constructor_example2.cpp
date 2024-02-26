#include <iostream>

using namespace std;

class myclass {
	
	private:
		int a, b;
	public:
		myclass(){
			
		}
		
		myclass (const myclass &paramOjb){
			a = paramOjb.a;
			b = paramOjb.b;
		}
		
		void printdata ( void ){
			cout<<"a="<<a<<" b="<<b<<"\n";
		}
	
};

int main ( void ){
	myclass objA;
	myclass objB(objA);
	objA.printdata();
	objB.printdata();
	return 0;
}


//output
//======
//a=3639277 b=18059264
//a=3639277 b=18059264