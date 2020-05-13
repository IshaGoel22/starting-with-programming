#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	float cost;
	if(a>0 && a<=50){
	 cost=a*0.50;
	}
	else if(a>51 && a<=150){
		cost=a*0.75;
	}
	else if(a>151 && a<=250){
	cost=a*1.20;
	}
	else{
		cost=a*1.50;
	}
	printf("cost = %f",cost);
	return 0;
}
