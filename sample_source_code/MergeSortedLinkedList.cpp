#include <iostream>
#include <string>

using namespace std;

class Node{
	public:
		int element;
		Node *link;
		
		Node(int element):element(element), link(NULL){}
};

class LinkedList{
	public:
		Node *head;
		Node *tail;

		LinkedList(): head(NULL), tail(NULL){}
		
		void insert(int element){
			if(head==tail&&head==NULL){
				head=tail=new Node(element);
				return;
			}
			tail->link=new Node(element);
			tail = tail->link;
		}
		
		void print(){
			Node *temp = head;
			
			cout<<"\n";
			while(temp!=NULL){
				cout<<temp->element<<" -> ";
				temp = temp->link;
			}
			cout<<"NULL\n";
		}
		
		Node *getMinvalueNode(Node *nodeA, Node *nodeB){
			Node *node;
			if(nodeA==NULL && nodeB==NULL){
				return NULL;
			} else if(nodeA==NULL){
				return nodeB;
			} else if(nodeB == NULL){
				return nodeA;
			}
			if(nodeA->element > nodeB->element){
				node = nodeB;
				node->link = getMinvalueNode(nodeA, nodeB->link);
			} else {
				node = nodeA;
				node->link = getMinvalueNode(nodeA->link, nodeB);
			}
			return node;
		}
		
		void mergeList (LinkedList &secondList){
			head = getMinvalueNode(head, secondList.head);
		}
		
};

int main ( void ){
	string numberStr;
	LinkedList list1,list2;
	cout<<"Enter elements of first list:\n";
	int cnt = 5;
	int no;
	while(cnt -- ){
		cin >> no;
		list1.insert(no);
	}
	cout<<"Enter elements of second list:\n";
	cnt = 5;
	while(cnt -- ){
		cin >> no;
		list2.insert(no);
	}
	cout<<"first list:";
	list1.print();
	cout<<"second list:";
	list2.print();
	list1.mergeList(list2);
	cout<<"merged:";
	list1.print();
}