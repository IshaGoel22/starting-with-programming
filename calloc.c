#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *)calloc(6,sizeof(float));
     for(int i=0;i<6;i++){
        printf("The value at location %d is %d\n",i,ptr[i]);
    }
    //calloc gives 0 as default value at every location where as malloc do not
    return 0;
}