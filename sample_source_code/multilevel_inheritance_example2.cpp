#include <iostream>

using namespace std;

class baseclass {
	public:
		baseclass(){
			cout <<"baseclass constructor called\n";
		}
		~baseclass(){
			cout <<"baseclass destructor called\n";
		}
};


class derivedclass: private baseclass {
	public:
		derivedclass(){
			cout <<"derivedclass constructor called\n";
		}
		~derivedclass(){
			cout <<"derivedclass destructor called\n";
		}	
};

int main ( void ){
	derivedclass obj;
	return 0;
}

//output
//======
//baseclass constructor called
//derivedclass constructor called
//derivedclass destructor calle
//baseclass destructor called