#include <iostream>
#include <memory>

using namespace std;

class myclass {
	public:
		myclass(){
			cout<<"myclass constructor called\n";
		}
		
		void printdata (void){
			cout<<"printing\n";
		}
		
		~myclass(){
			cout<<"myclass destructor called\n";
		}		
};


void myfunction (shared_ptr<myclass> &ptr){
	shared_ptr<myclass> tempPtr = ptr;
	(*tempPtr).printdata();
	cout<<"inside myfunction ref_count:"<<ptr.use_count()<<"\n";
}

int main ( void ){
	shared_ptr<myclass> ptr = make_shared<myclass>();
	
	cout<<"inside main before calling myfunction, ref_count:"<<ptr.use_count()<<"\n";
	myfunction(ptr);
	cout<<"inside main before calling myfunction, ref_count:"<<ptr.use_count()<<"\n";
}

//output
//======
//myclass constructor called
//inside main before calling myfunction, ref_count:1
//printing
//inside myfunction ref_count:2
//inside main before calling myfunction, ref_count:1
//myclass destructor called