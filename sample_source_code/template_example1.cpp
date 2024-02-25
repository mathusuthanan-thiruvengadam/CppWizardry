#include <iostream>

using namespace std;

template <typename T>

class myclass {
	public:
		T add (T a, T b ){
			return a + b;
		}
		T sub (T a, T b){
			return a - b;
		}
};

template <>

class myclass <string> {
	public:
		string add ( string a, string b){
			return a+b;
		}
		
		string sub (string a,  string b){
#if 1			
			int index;
			int size = b.size();
			
			while(a.find(b)!=-1){
				index = a.find(b);
				a.erase(index, size);
			}
			return a;
#else	
			return "hello";
#endif		
			
		}
};

using namespace std;

int main ( void ){
	myclass <int>intobj;
	myclass <string>stringobj;
	//cout <<"add(10,20):"<<intobj.add(10,20)<<" sub(20,10):"<<intobj.sub(20,10)<<"\n";
	cout <<"add(mathu,suthanan):"<<stringobj.add("mathu","suthanan")<<" sub(hellow mathu how are you mathu, mathu):"<<stringobj.sub("hellow mathu how are you mathu", "mathu");
	return 0;
}