//Tri-diagonal --> M(i,j)=0  for |i-j|>1
//non zero elements lie on 3 diagonals
//main diagonal: i=j
//below i=j+1
//above i=j-1
//total elements = 3n-2
#include<stdio.h>
#define n 3
int main(){
	int i,j,size = 3*n -2,k=0;
	int a[size];
	for(int i =0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Matrix: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i==j-1) || (i==j) || (i==j+1)){
				printf("%d ",a[k]);
				k++;
			}
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
