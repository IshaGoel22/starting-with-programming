//Symmetric matrix --> 1d array of size  (n*(n+1))/2 by storing either upper or lower triangle
#include<stdio.h>
#define n 4
int main(){
	int i,j,size = (n*(n+1))/2;
	int a[size];
	for(iint i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Symmetric matrix: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				ptintf("%d",a[i]);
			}
		}
	}
	return 0;
}
