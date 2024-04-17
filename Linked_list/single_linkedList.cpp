#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int data) {
		this -> data = data;
		this -> next = NULL;
	}

	~Node(){
		int val = this->data;

		if(this->next != NULL){
			delete next;
			this->next = NULL;
		}

		cout << "-- Mem freed with data " << val <<"--"<< 	 endl;
	}

};



void insertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp->next = head;
	head = temp;
}

void insertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next = temp;
	tail = tail->next; 
}

void insertAtMiddle(Node* &head, Node* &tail, int d, int pos){
	if(pos == 1) {
		insertAtHead(head,d);
		return;
	}

	Node* nodeToinsert = new Node(d);
	Node* temp = head;
	int cnt = 1;

	while(cnt < pos-1){
		temp = temp->next;
		cnt++;	
	}

	if(temp->next == NULL){
		insertAtTail(tail,d);
		return;
	}

	nodeToinsert->next = temp->next;
	temp->next = nodeToinsert;
}

void deleteByPos(Node* &head, Node* &tail,int pos){
	Node* temp = head;
	Node* del = head;
	if(pos == 1){
		head = temp->next;
		temp->next = NULL;
		delete del;
		return;
	}

	int cnt = 1;

	while(cnt < pos-1){
		temp = temp->next;
		cnt++;
	}
	del = temp->next;
	if(temp->next->next == NULL){
		tail = temp;
		
	}

	temp->next = temp->next->next;
	del->next = NULL;
	delete del;

}

void deleteByValue(Node* &head,Node* &tail,int val){

	Node* temp = head;
	int pos = 1;


	while(temp->data != val){
		if(temp->next == NULL){
			cout << endl << "ELEMENT NOT FOUND" << endl;
			return;
		}
		temp = temp->next;
		pos++;
	}

	deleteByPos(head,tail,pos);
}

void print(Node* &head){
	Node* temp = head;

	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}

	cout << endl;
}



int main(){
	
	Node* node1 = new Node(10);

	Node* head = node1;
	Node* tail = node1;
	print(head);
	insertAtHead(head,5);
	print(head);
	insertAtTail(tail,20);
	print(head);
	insertAtTail(tail,30);
	print(head);

	insertAtMiddle(head,tail,40,2);
	print(head);
	insertAtMiddle(head,tail,50,5);
	print(head);
	deleteByPos(head,tail,1);
	print(head);
	deleteByPos(head,tail,1);
	print(head);
	deleteByValue(head,tail,50);
	print(head);





	cout << endl << endl;
	cout << "Head: " << head->data << endl;
	cout << "tail: " << tail->data << endl; 

	
}