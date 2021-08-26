#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));    //initializing
    int num,guess,count=1;
    num = rand()%100 + 1;
    //generate random number between 1 and 100
    do
    {
        printf("Guess the number between 1 to 100");
        scanf("%d",&guess);
        if(guess>num){
            printf("Lower number please\n");
        }
        else if(guess<num){
            printf("Higher number please!\n");
        }
        else{
            printf("You gussed after %d attempts\n",count);
        }
        count++;

    } while (guess!=num);
    
    printf("The random number is %d",num);
}