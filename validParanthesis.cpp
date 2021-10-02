//valid paranthesis
//open paranthesis --> push 
//close parathesis --> pop
/* Conditions for unbalanced parentheses:
If there is no opening bracket inside the stack to pop(when close bracket comes), we say the expression has unbalanced parentheses.
if at end of expression,there is still one or more open brackets left in stack,i.e, it is not empty  we call these parentheses unbalanced.
*/
#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    char *arr;
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

void push(struct stack *sp,char num){
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

int isValid(char *exp){
    struct stack *sp  = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->arr =  (char *)malloc(sp->size * sizeof(char));
    sp->top = -1;

     for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('){
            push(sp, '(');
        }
        else if(exp[i]==')'){
            pop(sp); 
        }
    }
 
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }

    
}

int main(){
    char * exp = "((8)(*--$$9))";
    
    if(isValid(exp)){
        cout<<"Valid"<<endl;
    }
    else 
        cout<<"invalid"<<endl;

    return 0;
}