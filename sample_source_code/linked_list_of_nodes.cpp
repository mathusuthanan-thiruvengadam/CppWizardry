
#include <iostream>

using namespace std;

template <typename T>
class Node {
	public:
		T value;
		Node<T> *next;
		
		Node(T input){
			value = input;
			next = NULL;
		}
		
		T* getNext (){
			return next;
		}
		
		void parse ( void ){
			cout<<value;
		}
};

template <typename T>
class MyList {
		Node<T> *head;
		Node<T> *current;
	public:
		MyList(T inp){
			current = head = new Node<T>(inp)
		}
		MyList(){
			current = head = NULL;
		}
		
		void insert(T inp){
			if(current==NULL){
				head = current = new Node<T>(inp);
			} else {
				current ->next = new Node<T>(inp);
				current = current->next;
			}
			
		}
	
		void print( void ){
			Node<T> *start = head;
			while(start!=NULL){
				start->parse();
				start = start ->next;
			}
		}
};


int main ( void ){
	MyList<int> myIntList;
	myIntList.insert(10);
	myIntList.insert(20);
	myIntList.insert(30);
	myIntList.insert(40);
	myIntList.print();
	
}