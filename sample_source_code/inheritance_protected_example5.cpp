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
	cout<<"printing protected:"<<objA.protectedVara<<" "<<objA.protectedVarb<<"\n";
}

//output
//======
//inheritance_protected_example5.cpp(42): error C2248: 'myclass::protectedVara': cannot access protected member declared in class 'myclass'
//inheritance_protected_example5.cpp(9): note: see declaration of 'myclass::protectedVara'
//inheritance_protected_example5.cpp(5): note: see declaration of 'myclass'
//inheritance_protected_example5.cpp(42): error C2248: 'myclass::protectedVarb': cannot access protected member declared in class 'myclass'
//inheritance_protected_example5.cpp(9): note: see declaration of 'myclass::protectedVarb'
//inheritance_protected_example5.cpp(5): note: see declaration of 'myclass'