#include <iostream>

using namespace std;

class MySingleToResource {
		int memberVarA;
		int memberVarB;
	
	private:
		MySingleToResource(){
		}
		
		MySingleToResource(int a, int b):memberVarA(a), memberVarB(b)
	public:
		MySingleToResource& getIntance(){
			static MySingleToResource obj(20,20);
			return obj
		}
		
		void printData (){
			count<<"a:"<<a<<" b:"<<b<<"\n"
		}
		
		
};

int main ( void ){
	MySingleToResource myobj;
	return 0;
}

//output
//singleton_design_pattern_example1.cpp
//singleton_design_pattern_example1.cpp(14): error C2612: trailing 'public' illegal in base/member initializer list
//singleton_design_pattern_example1.cpp(31): fatal error C1004: unexpected end-of-file found