#include <iostream>

using namespace std;

class MySingleToResource {
	private:
	
		int memberVarA;
		int memberVarB;
	
		MySingleToResource(){
		}
		
		MySingleToResource(int a, int b):memberVarA(a), memberVarB(b){}
	
	public:
		static MySingleToResource& getIntance(){
			static MySingleToResource obj(20,20);
			return obj;
		}
		
		void printData (){
			cout<<"a:"<<memberVarA<<" b:"<<memberVarB<<"\n";
		}
};

int main ( void ){
	MySingleToResource &myObj = MySingleToResource::getIntance();
	myObj.printData();
	return 0;
}

//output
//singleton_design_pattern_example1.cpp
//singleton_design_pattern_example1.cpp(14): error C2612: trailing 'public' illegal in base/member initializer list
//singleton_design_pattern_example1.cpp(31): fatal error C1004: unexpected end-of-file found