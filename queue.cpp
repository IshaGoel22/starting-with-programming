//A queue is a collection of elements with certain operations following FIFO (First in First Out) discipline. 
//We insert at one end and delete from the other
//Can be implemented using array , linked list,other ADTs
/*  
Queue ADT
Data: In order to create a queue ( q ), we need two pointers, one pointing to the insertion end(frontind),deletion end(backind)
Mehods: enqueue()-push(),dequeue()-pop(),empty(),full(),firstVal(),lastVal(),peek(position),

if we use one value backInd(initial -1) ,i.e,++ on insertion,-- on deletion (more time complexity shifting elements)
So use two backInd  (r),frontInd (f) = -1 Time Complexity: O(1),
Insertion( enqueue ): backInd++,Insert the element
Deletion( dequeue): remove element, frontInd++
Our first element is at index frontInd +1, and the rearmost element is at index backInd.
isEmpty() --> q.r == q.f
isFull() --> q.r = q.size - 1
*/
#include<iostream>
using namespace std;

struct queue{
    int size;
    int f; //frontind
    int r;  //backInd (rearInd)
    int *arr;
}

int main(){
    struct queue q;
    q.size = 10;
    q.f = -1;
    q.r = -1; //empty = q.f
    q.arr = (int *)malloc(q.size * sizeof(int));
    
    return 0;
}