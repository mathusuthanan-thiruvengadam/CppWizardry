#include <iostream>

using namespace std;

class Node {
	public:
		int element;
		Node *next;
		
		Node(int no){
			element = no;
			next = NULL;
		}
};

class LinkedList {
	public:
		Node *head;
		Node *tail;
		
		LinkedList(){
			head = tail = NULL;
		}
		
		void insert( int no){
			if(head==tail && head==NULL){
				head = tail = new Node(no);
			} else {
				tail->next = new Node(no);
				tail = tail->next;
			}
		}
		
		void remove(){
			if(head==NULL){
				cout<<"empty list!\n";
			}else if(head==tail){
				cout<<"removing "<<head->element<<"\n";
				head=head->next;
				if(head==NULL){
					tail==NULL;
				}
			}
		}
		
		LinkedList& operator+(LinkedList &secondList){
			Node *l1 = head;
			Node *l2 = secondList.head;
			Node *temp1;
			Node *temp2;
			while(l1->next!=NULL && l2->next!=NULL){
				temp1 = l1; l1 = l1->next;
				temp2 = l2; l2 = l2->next;
				temp1->next=temp2;
				temp2 ->next = l1;
			}
			
		}
		
		void print(){
			Node *temp=head;
			while(temp!=NULL){
				cout<<temp->element<<" -> ";
				temp = temp->next;
			}
			cout<<"NULL\n";
		}
};


int main (void){
	int choice;
	LinkedList a;
	LinkedList b;
	int element;
	do{
		cout<<"1.add element to first list\n";
		cout<<"2.add element to second list\n";
		cout<<"3.printall\n";
		cin >> choice;
		if(choice==1){
			cout<<"element:";
			cin>>element;
			a.insert(element);
		} else if(choice==2){
			cout<<"element:";
			cin>>element;
			b.insert(element);
		} else if(choice==3){
			cout<<"list A "; a.print();
			cout<<"list B "; b.print();
		}
	} while(choice<4);
	
	return 0;
}