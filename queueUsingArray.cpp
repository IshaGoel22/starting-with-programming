/* 
Drawbacks of implementing queue using array  (Linear increment indices--> i++)
->space is not efficiently  (as after dequeue pehle ki space khali ho jati h)
solution->pointer reset,i.e,f&r = -1 ,when queue become empty,This makes all the space in the array reusable
more optimized --> circular queues --> do circular increment indices (i+1) % size -->f,q=0
eg  size =3  => i = 0 to size-1
    (0+1)%3 = 1
    (1+1)%3 = 2
    (2+1)%3 = 0  //queue empty
*/

#include<iostream>
using namespace std;

struct queue{
    int size;
    int f; //frontind
    int r;  //backInd (rearInd)
    int *arr;
};

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    else return 0;
}

int isEmpty(struct queue *q){
    if(q->f == q->r){
        return 1;
    }
    else return 0;
}

void enqueue(struct queue *q,int val){
    if(isFull(q)){
        cout<<"Queue OverFlow"<<endl;
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q){
    int a;
    if(isEmpty(q)){
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    else{
        q->f++;  //FIFO
        a = q->arr[q->f];
        return a;
    }
}

int main(){
    struct queue q;
    q.size = 10;
    q.f = -1;
    q.r = -1; //empty = q.f
    q.arr = (int *)malloc(q.size * sizeof(int));
    
    enqueue(&q,9);
    enqueue(&q,4);
    enqueue(&q,1);  

    cout<<"Dequeue element: "<<dequeue(&q)<<endl; //9
    cout<<"Dequeue element: "<<dequeue(&q)<<endl; //4

    return 0;
}