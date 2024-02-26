#include <iostream>

using namespace std;

class myclass {
	public:
		myclass(){
			cout<<"inside constructor\n";
		}
		~myclass(){
			cout<<"inside destructor\n";
		}
		
};

int main ( void ){
	myclass *objA = new myclass();
	cout <<"inside main function\n";	
	delete objA;
	return 0;
}

//output
//======
//inside constructor
//inside main function
//inside destructor
