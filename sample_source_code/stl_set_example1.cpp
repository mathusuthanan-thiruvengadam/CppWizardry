#include <set>
#include <iostream>

using namespace std;

int main (void){
	set<int> myset({0,20,30,40,60,50});
	set<int>::iterator myiterator;
	
	for(myiterator=myset.begin(); myiterator!=myset.end(); myiterator++){
		cout<<*myiterator<<"\n";
	}
	
	return 0;
}