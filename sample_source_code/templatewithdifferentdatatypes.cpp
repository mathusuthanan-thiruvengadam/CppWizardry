#include <iostream>

using namespace std;

template <typename T>

class myclass {
	private:
		T a,b;
	public:
		myclass (T x, T y){
			a = x;
			b = y;
		}
		
		T add (){
			return a+b;
		}
		
		string difference (){
			int bLength = b.size();
			int index = 0;
			while(a.find(b)!=-1){
				index = a.find(b);
				a.erase(index,bLength);
			}
			return a;
		}
		
		T difference (){
			return  a - b;
		}

}

void main ( void ){
	myclass <int> intobj(10, 6);
	cout<<"10+6="<<intobj.add();
	
	myclass <string> strobj("mathu","suthanan");
	cout<<"10+6="<<strobj.add();
}