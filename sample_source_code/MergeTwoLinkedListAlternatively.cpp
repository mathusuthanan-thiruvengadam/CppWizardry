

#include <iostream>
#include <vector>

using namespace std;

class Node {


	public:
		int element;
		Node *link;
		
		Node(int element){
			this->element = element;
			this->link = NULL;
		}
};

class LinkedList {
	private:
		Node *head;
		Node *tail;
		
		
	public:
		LinkedList(){
			head = tail = NULL;
		}
		
		void insert(int element){
			if(head==tail && head == NULL){
				head = tail = new Node(element);
				return;
			}
			tail->link = new Node(element);
			tail = tail->link;
			print();
		}

		
		void print(){
			Node *temp = head;
			while(temp!=NULL){
				cout<<temp->element<<"->";
				temp = temp->link;
			}
			cout<<"NULL\n";
		}

		LinkedList& operator+(LinkedList secondList){
			Node *p1 = head;
			Node *p2 = secondList.head;
			Node *xp2;
			while(p1->link!=NULL && p2->link!=NULL){
				xp2 = p2->link;
				p2->link = p1->link;
				p1->link = p2;
				p1 = p2->link;
				p2 = xp2;
			}
			if(p1->link==NULL){
				p1->link = p2;
			} else if(p2->link==NULL){
				p2->link = p1->link;
				p1->link = p2;
			}
			return *this;
		}
};

int main ( void ){
	int choice=1;
	int element;
	LinkedList list1, list2;

	while(choice){
		cout<<"1.insert to list 1\n";
		cout<<"2.insert to list 2\n";
		cout<<"3.Mix\n";
		cout<<"4.Print\n";
		cin >> choice;
		if(choice==1){
			cout<<"element:";
			cin >> element;
			list1.insert(element);
		} else if (choice ==2){
			cout<<"element:";
			cin >> element;
			list2.insert(element);
		} else if (choice ==3) {
			LinkedList &list3 = list1+list2;
			list3.print();
		} else if (choice ==4) {
			cout<<"list1:";
			list1.print();
			cout<<"\nlist2:";
			list2.print();
		}
	}
	return 0;
}