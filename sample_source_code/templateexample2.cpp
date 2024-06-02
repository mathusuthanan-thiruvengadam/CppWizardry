#include <iostream>

using namespace std;

template <typename T>

class myclass {

	public:

		
		T add (T a, T b){
			return a+b;
		}
		
		string difference (string a, string b){
			int bLength = b.size();
			int index = 0;
			while(a.find(b)!=-1){
				index = a.find(b);
				a.erase(index,bLength);
			}
			return a;
		}
		
		T difference ( T a, T b){
			return  a - b;
		}

};

int main ( void ){
	myclass <int> intobj;
	cout<<"10+6="<<intobj.add(10,5);
	myclass <string> strobj;
	cout<<"10+6="<<strobj.add("mathu","suthanan");
	return 0;
}