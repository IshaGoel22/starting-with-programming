#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;   //can be float ,char
    ptr = (int *)malloc(6 * sizeof(int));  //malloc returns void ,typecasing to int
    //as we assign dynamical memory to int
   
    for(int i=0;i<6;i++){
        printf("Enter value at %d location \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value at location %d is %d\n",i,ptr[i]);
    }
    return 0;
}