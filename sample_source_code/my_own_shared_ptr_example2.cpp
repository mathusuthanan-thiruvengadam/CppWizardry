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
		
		my_unique_ptr<T>& operator=(my_unique_ptr<T> &obj){
			//return my_unique_ptr(my_unique_ptr->ptr)
			return NULL;
		}
	
};

template <typename T>
my_unique_ptr<T> my_make_unique(T value){
	return my_unique_ptr<T>(new T(value));
}

int main ( void ){
	my_unique_ptr<int> ptr = my_make_unique<int>(10);
	my_unique_ptr<int> ptr2 = ptr;
	cout << *ptr<<"\n";
	cout << *ptr2;
}   