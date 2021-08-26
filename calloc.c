#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *)calloc(6,sizeof(float));
     for(int i=0;i<6;i++){
        printf("The value at location %d is %d\n",i,ptr[i]);
    }
    //if space is not there, null ptr is returned --> good to free memory
    //calloc gives 0 as default value at every location where as malloc do not
    //free(ptr) --> to de allocate memory
    //realloc --> to allocate memory of new size using previous pointer and size
    // realloc(ptr,10*sizeof(int));  --> reallocating ptr memory to storing 10 int
    return 0;
}