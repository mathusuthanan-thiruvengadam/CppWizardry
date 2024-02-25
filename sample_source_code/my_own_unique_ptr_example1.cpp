#include <iostream>

using namespace std;

template <typename T>
class my_unique_ptr {
		T *ptr;
	public:
		my_unique_ptr(T* ptr){
			this -> ptr = ptr;
		}
		
		T& operator *(){
			return *ptr;
		}
	
};

template <typename T>
my_unique_ptr<T> my_make_unique(T value){
	return my_unique_ptr<T>(new T(value));
}

int main ( void ){
	my_unique_ptr<int> ptr = my_make_unique<int>(10);
	cout << *ptr;
}