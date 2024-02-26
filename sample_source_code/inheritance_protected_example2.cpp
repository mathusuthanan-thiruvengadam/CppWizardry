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
			cout<<"printing private:"<<privateVara<<" "<<protectedVarb<<"\n";
		}
};


int main ( void ){
	firstDerivedClass objA;
	objA.printdata();
	
}

//output
//======
//inheritance_protected_example2.cpp(36): error C2248: 'myclass::privateVara': cannot access private member declared in class 'myclass'
//inheritance_protected_example2.cpp(7): note: see declaration of 'myclass::privateVara'
//inheritance_protected_example2.cpp(5): note: see declaration of 'myclass'