#include <iostream>

using namespace std;

template <typename T>
class myset{
		
	private:
		T elements[100];
		int number_of_elements=0;

	public:
		myset(T input[]){
			int index = 0;
			number_of_elements = sizeof(input);
			for(index = 0; index<number_of_elements;++index){
				elements[index] = input[index];
			}
		}

		void printalldata ( void ){
			int index = 0;
			for(index = 0; index<number_of_elements;++index){
				cout<<elements[index]<<"\n";
			}
		}
		
		class iterator{
			private:
				int current_index;
				T* elements;
			public: 
				iterator(){
				}
				
				iterator(T *elementbase, int index){
					elements = elementbase;
					current_index = index;
				}
				
				iterator operator ++(int){
					current_index++;
					return *this;
				}
				
				T operator *(){
					return elements[current_index];
				}
				
				bool operator != (iterator obj){
					return current_index!=obj.current_index;
				}
		};

		iterator begin ( void ){
			if(number_of_elements==0)
				return iterator();
			return iterator(elements, 0);
		}
	
		iterator end ( void ){	
			if(number_of_elements==0)
				return iterator();
			return iterator(elements, number_of_elements);
		}
};

int main ( void ){
	int arr[] = {1, 2, 3, 4, 5};
	myset<int> myobj(arr);
	myset<int>::iterator myiterator;
	
	
	for(myiterator=myobj.begin(); myiterator!=myobj.end(); myiterator++){
		cout<<*myiterator<<"\n";
	}
	
}