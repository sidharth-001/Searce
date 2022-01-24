#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
};

void insert_at_end(Node** SinglyLinkedList, int value){
	Node* new_node = new Node();
	Node *last = *SinglyLinkedList;
	new_node->data = value;
	new_node->next = NULL;
	if(*SinglyLinkedList == NULL){
		*SinglyLinkedList = new_node;
		return;
	}
	while(last->next != NULL){
		last = last->next;
	}
	last->next = new_node;
	return;
}

void printlinkedlist(Node *node){
	while(node != NULL){
		cout<<node->data<<"\n";
		node = node->next;
	}
}

int main(){
	Node* head = NULL;
	insert_at_end(&head, 6);
	insert_at_end(&head, 4);
	insert_at_end(&head, 5);
	insert_at_end(&head, 0);
	insert_at_end(&head, 1);
	printlinkedlist(head);
	return 0;
}
