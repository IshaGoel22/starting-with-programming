#include<stdio.h>

int main() {
	//code
	int test,a,b;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
	    scanf("%d%d",&a,&b);
	    if(a<b){
	       printf("%d is less than %d\n",a,b); 
	    }
	    else if(a>b){
	        printf("%d is greater than %d\n",a,b);
	    }
	    else{
	        printf("%d is equals to %d\n",a,b);
	    }
	}
	return 0;
}
