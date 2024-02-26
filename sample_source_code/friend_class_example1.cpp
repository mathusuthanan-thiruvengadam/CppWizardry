#include <iostream>

using namespace std;

class myclassB;

class myclassA {
	private:
		int privA, privB;
	public:
		myclassA(int a, int b){
			privA = a;
			privB = b;
		}
		
		void printalldata (myclassB &objB);
		
};

class myclassB {
	private:
		int privA, privB;
	public:
		myclassB(int a, int b){
			privA = a;
			privB = b;
		}
		friend class myclassA;
};

void myclassA::printalldata(myclassB &objB){
	cout<<"classB.a="<<objB.privA<<" classB.b"<<objB.privB<<" classA.privA="<<privA<<" classA.privB="<<privB<<"\n";
}

int main ( void ){
	myclassA objA(10,20);
	myclassB objB(30,40);
	
	objA.printalldata(objB);
	return 0;
}