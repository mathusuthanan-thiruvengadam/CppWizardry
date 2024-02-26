#include <iostream>

using namespace std;

class myclass{
	private:
		int privateVara, privateVarb;
	protected:
		int protectedVara, protectedVarb;
	public:
		int publicVara, publicVarb;
	
		myclass(){
		}
	
		myclass (int a, int b, int c, int d, int e, int f){
			privateVara = a;
			privateVarb = b;
			
			protectedVara = c;
			protectedVarb = d;
			
			publicVara = e;
			publicVarb = f;
		}
};

class firstDerivedClass : public myclass{
	public:
		firstDerivedClass(){
		}
		
		void printdata( void ){
			cout<<"printing public:"<<publicVara<<" "<<publicVarb<<"\n";
			cout<<"printing protected:"<<protectedVarb<<" "<<protectedVara<<"\n";			
		}
};


int main ( void ){
	firstDerivedClass objA;
	objA.printdata();
	
}

//output
//======
//printing public:14059533 4308992
//printing protected:14059533 14094640