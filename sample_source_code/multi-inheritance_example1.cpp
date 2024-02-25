#include <iostream>

using namespace std;

class baseclassA {
	public:
		int a;
};

class baseclassB {
	public:
		int a;
};

class derivedclass: public baseclassA, public baseclassB {
	public:
		void function ( void ){
			a = 10;
		}
};

int main ( void ){
	derivedclass obj;
	obj.function();
	return 0;
}

//output
//======
//.\multi-inheritance_example1.cpp(18): error C2385: ambiguous access of 'a'
//.\multi-inheritance_example1.cpp(18): note: could be the 'a' in base 'baseclassA'
//.\multi-inheritance_example1.cpp(18): note: or could be the 'a' in base 'baseclassB'