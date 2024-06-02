

#include <iostream>
#include <vector>

using namespace std;

class Node {
	private:
		int element;
		Node *next;
	public:
		Node(int element){
			this->element = element;
			this->next = NULL;
		}
		void setNext(Node *nextNode){
			next = nextNode;
		}
		void print(){
			cout<<element;
		}
		Node *getNext(){
			return next;
		}
};

class LinkedList {
	private:
		Node *head;
		Node *tail;
		
		Node* recursiveReverse(Node *node){
			Node *temp;
			if(node==NULL){
				return NULL;
			}
			temp = recursiveReverse(node->getNext());
			if(temp!=NULL){
				temp->setNext(node);
			}
			return node;
		}
		
		
	public:
		LinkedList(){
			head = tail = NULL;
		}
		
		void insert(int element){
			if(head==tail && head == NULL){
				head = tail = new Node(element);
				return;
			}
			tail->setNext(new Node(element));
			tail = tail->getNext();
			print();
		}
		
		void print(){
			Node *temp = head;
			while(temp!=NULL){
				temp->print();
				cout<<"->";
				temp = temp->getNext();
			}
			cout<<"NULL\n";
		}

		void reverse(int groupSize){
			vector<pair<Node*, Node *>> listOfLists;
			vector<pair<Node*, Node *>>::iterator iter;
			Node *current = head;
			Node *temp;
			Node *prev = NULL;
			Node *start;
			Node *end;
			Node *next = current ->getNext();
			
			int tempCnt;
			
			temp = head;
			head = tail;
			tail = temp;
			
			while(current!=NULL){
				
				tempCnt = groupSize;
				prev = NULL;
				end = current;
				while(tempCnt-- && current!=NULL){
					current->setNext(prev);
					prev = current;
					current = next;
					if(current!=NULL){
						next = current ->getNext();
					}
				}
				start = prev;
				cout<<"pushing a range from ";start->print();cout<<" to ";end->print();cout<<"\n";
				listOfLists.push_back(make_pair(start, end));
			}
			
			Node *prevListEnd = listOfLists[listOfLists.size()-1].second;
			for(int i=listOfLists.size()-2;i>=0;i--){
				prevListEnd->setNext(listOfLists[i].first);
				prevListEnd = listOfLists[i].second;
			}
			print();
		}


		void reverseNonrecursive(){
			Node *current, *prev, *next;
			tail = head;
			current = head;
			prev = NULL;
			next = current->getNext();
			
			while(current!=NULL){
				current->setNext(prev);
				prev = current;
				current = next;
				if(current!=NULL){
					next = current ->getNext();
				}
			}
			head = prev;
			print();
		}
		
		void reverse(){
			Node *tempTail = tail;
			Node *tempHead = head;
			recursiveReverse(head);
			head = tempTail;
			tail = tempHead;
			tail ->setNext(NULL);
			print();
		}
};

int main ( void ){
	int choice=1;
	int groupSize;
	int element;
	bool firstTime = true;
	LinkedList list;
	while(choice){
		cout<<"1.insert\n";
		cout<<"2.Reverse\n";
		cout<<"3.Reverse by group"
		cout<<"3.Print\n";
		cin >> choice;
		if(choice==1){
			cout<<"element:";
			cin >> element;
			list.insert(element);
		} else if (choice ==2){
			cout<<"enter group size:";
			cin >> groupSize;
			list.reverse(groupSize);
		} else {
			list.print();
		}
	}
	return 0;
}