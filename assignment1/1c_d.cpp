//Triangular Matrices
// total elements in 1D array ,size = n(n+1)/2
// k =0
//input array a[size]
//Upper Triangular --> for i=0 to i<n and j=0 to j<n 
//--> if i<=j print a[k] k++   else 0 
//lower triangular --> for i=0 to i<n and j=0 to j<n 
//--> if i>=j print a[k] k++   else 0
#include<stdio.h>
#define n 4
//Taking input row wise
int main(){
	int i,j,size = (n*(n+1))/2,k=0;
	int a[size];
	for(int i =0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Upper Matrix: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<=j){
				printf("%d ",a[k]);
				k++;
			}
			else
				printf("0 ");
		}
		printf("\n");
	}
	k =0;
	printf("Lower Matrix: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>=j){
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
