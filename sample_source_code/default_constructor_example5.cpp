#include <iostream>

using namespace std;

class myclass {
	private:
		int a;
		int b;
	public:
		
		void printdata (void){
			cout <<"a="<<a<<" b="<<b;
		}
};

int main ( void ){
	myclass myobj;
	myobj.printdata();
	return 0;
}


//output
//=======
//a=624541 b=10149888