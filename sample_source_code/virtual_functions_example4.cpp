
#include <iostream>

using namespace std;

class animal {
	public:
		void makesound(){
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
	animal *ani= new animal();
	ani->makesound();	
	return 0;
}

//output
//======
//animal sounds


