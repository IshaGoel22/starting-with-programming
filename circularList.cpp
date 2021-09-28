#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next; //self referencing
};

//O(n)
void Traversal(struct Node *first){
    struct Node *ptr = first;
    //prints data of first
    do{
        cout<<"Element: "<<ptr->data<<endl;
        ptr = ptr->next;  //points to next node
    }while(ptr != first);   //when last node comes that points to first
    cout<<endl;
}

//O(1)
struct Node *insertAtFirst(struct Node *first,int num){
    struct Node *ptr = first->next;
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = num;
    n->next = first;  

    // At this point ptr points to the last node of this circular linked list
    while(ptr->next != first){
        ptr = ptr->next;
    }

    ptr->next = n;
    // first = n;
    return n;
}

//O(n)
struct Node *insertAtEnd(struct Node *first,int num){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = num;

    struct Node *ptr = first->next;
    while(ptr->next != first){
        ptr = ptr->next;
    }
    ptr->next = n;
    n->next = first; 
    return first;
}

//O(n)
struct Node *insertAtIndex(struct Node *first,int num,int index){
    struct Node *ptr = first;

    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = num;
    int i =0;
    while(i!=index-1){
        ptr = ptr->next;
        i++;
    }
    n->next = ptr->next;
    ptr->next = n;
    return first;
}

int main(){
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    first->data = 4;
    first->next = second;

    second->data = 7;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = first; //circular linked list

    cout<<"Initial Linked List"<<endl;
    Traversal(first);

    // cout<<"Insert at begin"<<endl;
    // first = insertAtFirst(first,1);
    // Traversal(first);

    // cout<<"Insert At End "<<endl;
    // first = insertAtEnd(first,5);
    // Traversal(first);

    cout<<"Insert At Index"<<endl;
    first = insertAtIndex(first,0,3);
    Traversal(first);

    return 0;
}