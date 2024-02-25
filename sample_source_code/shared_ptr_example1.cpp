#include <iostream>
#include <memory>

using namespace std;

class myclass {
	public:
		myclass(){
			cout<<"myclass constructor called\n";
		}
		~myclass(){
			cout<<"myclass destructor called\n";
		}		
};

int main ( void ){
	shared_ptr<myclass> ptr = make_shared<myclass>();
	cout<<"inside main\n";
}