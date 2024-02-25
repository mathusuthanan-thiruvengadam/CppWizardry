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
			baseclassA::a = 10;
		}
};

int main ( void ){
	derivedclass obj;
	obj.function();
	return 0;
}

//output
//======
//build succeeds
