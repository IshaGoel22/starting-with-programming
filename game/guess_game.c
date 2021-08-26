#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));    //initializing
    int num;
    num = rand()%100 + 1;
    //generate random number between 1 and 100
    printf("The random number is %d",num);
}