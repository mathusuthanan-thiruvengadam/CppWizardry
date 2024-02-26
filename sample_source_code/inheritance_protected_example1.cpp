#include <iostream>

using namespace std;

class myclass{
	private:
		int privateVara, privateVarb;
	protected:
		int protectedVara, protectedVarb;
	public:
		int publicVara, publicVarb;
	
		myclass (int a, int b, int c, int d, int e, int f){
			privateVara = a;
			privateVarb = b;
			
			protectedVara = c;
			protectedVarb = d;
			
			publicVara = e;
			publicVarb = f;
			
		}

};

int main ( void ){
	myclass objA(1,2,3,4,5,6);
	
	cout<<"printing public:"<<objA.publicVara<<" "<<objA.publicVarb<<"\n";
	cout<<"printing protected:"<<objA.protectedVarb<<" "<<objA.protectedVara<<"\n";
	cout<<"printing private:"<<objA.privateVara<<" "<<objA.protectedVarb<<"\n";
}

//output
//======
//inheritance_protected_example1.cpp(31): error C2248: 'myclass::protectedVarb': cannot access protected member declared in class 'myclass'
//inheritance_protected_example1.cpp(9): note: see declaration of 'myclass::protectedVarb'
//inheritance_protected_example1.cpp(5): note: see declaration of 'myclass'
//inheritance_protected_example1.cpp(31): error C2248: 'myclass::protectedVara': cannot access protected member declared in class 'myclass'
//inheritance_protected_example1.cpp(9): note: see declaration of 'myclass::protectedVara'
//inheritance_protected_example1.cpp(5): note: see declaration of 'myclass'
//inheritance_protected_example1.cpp(32): error C2248: 'myclass::privateVara': cannot access private member declared in class 'myclass'
//inheritance_protected_example1.cpp(7): note: see declaration of 'myclass::privateVara'
//inheritance_protected_example1.cpp(5): note: see declaration of 'myclass'
//inheritance_protected_example1.cpp(32): error C2248: 'myclass::protectedVarb': cannot access protected member declared in class 'myclass'
//inheritance_protected_example1.cpp(9): note: see declaration of 'myclass::protectedVarb'
//inheritance_protected_example1.cpp(5): note: see declaration of 'myclass'