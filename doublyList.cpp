#include<iostream>
using namespace std;

//Doubly Linked List;
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
};

void Traversal(struct Node *p){
	while(p != NULL){
		cout<<"Element: "<<p->data<<endl;
		p = p->next;
	}
	cout<<endl;
}

void Reverse(struct Node *p){
	while(p != NULL){
		p = p->next;
	}
	while(p->prev != NULL){
		cout<<"Element: "<<p->data<<endl;
		p = p->prev;
	}
	cout<<endl;
}

int main(){
	struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;

    // Allocate memory for nodes in the linked list in Heap
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    first->data = 1;
    first->next = second;
    first->prev = NULL;

    second->data = 2;
    second->next = third;
    second->prev = first;

    third->data = 3;
    third->next = fourth;
    third->prev = second;

    fourth->data = 4;
    fourth->prev = third;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->prev = fourth;
    fifth->next = sixth; 
    
    sixth->data = 6;
    sixth->prev = fifth;
    sixth->next = NULL;  //end of linkedlist

    cout<<"Initial Linked List: "<<endl;
    Traversal(first);
    
    cout<<"Reverse Linked List: "<<endl;
    Reverse(first);
	
    
    return 0;
}
