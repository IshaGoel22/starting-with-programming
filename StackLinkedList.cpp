/*
two sides of a linked list, one the head, and the other pointing to NULL
Which side do you feel should we consider as the top of the stack, where we push and pop from?
--> And why the head side, that is side 1? --> head node of linked list is now Top of stack
Because that’s the head node of the linked list, and insertion and deletion of a node at head happens to function in a constant 
time complexity, O(1). Whereas inserting or deleting a node at the last position takes a linear time complexity, O(n).
When using Linked List for implementation
*Condition for stack full: When heap memory is exhausted (else can add as many nodes to linked list)
*Condition for stack empty:  top == NULL
Even though a stack-linked list has no upper limit to its size, you can always set a custom size for it.
*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void Traversal(struct Node *p)
{
    while (p != NULL)
    {
        printf("Element: %d\n", p->data);
        p = p->next;
    }
}

int isEmpty(struct Node *top){
   return (top== NULL) ? 1 : 0;
}

int isFull(struct Node *top){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    return n==NULL ? 1 : 0; 
}

struct Node *push(struct Node *top,int num){
     struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if(isFull(top)){
        cout<<"Stack OverFlow..!"<<endl;
    }
    else   
        p->data = num;
        p->next = top;
        top = p;
        return top;
}

int pop(struct Node **top){
    if(isEmpty(*top)){
        cout<<"Stack UnderFlow..!"<<endl;
    }
    struct Node *pt = *top;
    int x = pt->data;
    *top = (*top)->next;
    free(pt);
    return x;
    
}

int main(){
    struct Node *top = NULL;
    top = push(top,9);
    top = push(top,2);
    top =push(top,6);
    Traversal(top);

    cout<<endl<<"Popped element "<<pop(&top)<<endl;  //passing address of top 
    //can make top as global variable... so no need to pass address changes will be reflected in that 
    Traversal(top);
    return 0;
}

