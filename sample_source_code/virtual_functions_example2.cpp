
#include <iostream>

using namespace std;

class animal {
	public:
		virtual void makesound(){
			cout <<"animal sounds\n";
		}
		
};

class dog : public animal {
	public:
		void makesound(){
			cout<<"dog barks\n";
		}
};

class cow: public animal {
	public:
		void makesound(){
			cout<<"cow sounds\n";
		}	
};

int main ( void ){
	dog dogObj;
	cow cowObj;
	animal *ani= &dogObj;
	ani->makesound();
	ani = &cowObj;
	ani->makesound();
	
	return 0;
}

//output
//======
//dog barks
//cow sounds


