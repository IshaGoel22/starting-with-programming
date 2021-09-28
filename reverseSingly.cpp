#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next; //self referencing structure
};

void Traversal(struct Node *p)
{
    while (p != NULL)
    {
        cout<<"Element: "<< p->data<<endl;
        p = p->next;
    }
    cout<<endl;
}

//to reverse singly list
struct Node *reverse(struct Node *p){
	struct Node *prev = NULL;
	struct Node *curr = p;
	struct Node *after ;
	
	while(curr != NULL){
		after = curr->next;
		curr->next = prev;
		
		prev = curr;
		curr = after;
	}	
	return prev;
}

//To reverse Singly Linked List
struct Node *reverselist(struct Node* traverse)
{
    if (traverse == NULL || traverse->next == NULL) return traverse;
    struct Node *newHead = reverselist(traverse->next); //reversing connection till second node
    traverse->next->next = traverse;  //second node points to previous first
    traverse->next = NULL;   //first points to null
    return newHead;
}

int main()
{
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

    first->data = 8;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 0;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = fifth;

    fifth->data = 1;
    fifth->next = sixth; 
    
    sixth->data = 4;
    sixth->next = NULL;  //end of linkedlist

    cout<<"Initial Linked List: "<<endl;
    Traversal(first);
	
	cout<<"Revering linked List: "<<endl;
	Traversal(reverselist(first));
    

    return 0;
}
