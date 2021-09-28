//Implementation of stack using array
//stack is linear data structure. Operations in stack are performed in FILO/LIFO manner  (First In Last Out/Last In First Out)
#include<iostream>
using namespace std;

//O(1)
struct stack{
    int size;
    int *arr;
    int top;
};

int isFull(struct stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    else 
        return 0;
}

int isEmpty(struct stack *s){
    if(s->top == -1){
        return 1;
    }
    else 
        return 0;
}

void push(struct stack *sp,int num){
    if(isFull(sp)){
        cout<<"Stack Overflow...Cannot add "<<num<<endl;
    }
    else{
        sp->top++;
        sp->arr[sp->top] = num;
    }
}

int pop(struct stack *sp){
    int val;
    if(isEmpty(sp)){
        cout<<"Stack UnderFlow..!"<<endl;
        return 0;
    }
    else
        
        val = sp->arr[sp->top];
        sp->top--;
        return val;
}

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
 
int stackBottom(struct stack* sp){
    return sp->arr[0];
}

int peek(struct stack *sp,int i){  //i is position is from topmost element in stack
    int pos = sp->top-i+1;
    if(pos < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[pos];
    }
}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));  //allocate memory to stack pointer
    sp->size=6;
    sp->top = -1; //-1 means no element is there in stack/array
    sp->arr = (int *)malloc(sp->size * sizeof(int));  //allocate memory to array

    cout<<"Before pushing,isEmpty: "<<isEmpty(sp)<<endl;
    cout<<"Before pushing, isFull: "<<isFull(sp)<<endl;
    cout<<endl;
    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5);
    push(sp,6);   //size is 6 so stack is full after pushing this element
    push(sp,7);     // stack overflow -->not added to stack
    
    cout<<endl<<"After pushing,isEmpty: "<<isEmpty(sp)<<endl;
    cout<<"After pushing, isFull: "<<isFull(sp)<<endl;

    cout<<endl<<"Topmost element is: "<<stackTop(sp)<<endl;
    cout<<"Bottom element is: "<<stackBottom(sp)<<endl;
    cout<<endl<<"Poping Topmost element: "<<pop(sp)<<endl;

    cout<<endl;
    for(int i=1;i<=sp->top+1;i++){  //position is from 1(start from top) and top ranges form 0 to size-1 (from bottom)
        cout<<peek(sp,i)<<" ";
    }

    return 0;
}