//Diagonal matrix --> 2D array takes n2xsizeof(dataType) space 
//--> so we take input of 1D array and retreive it as diagonal matrix 
// M(i,j) = 0  for i != j
#include<iostream>
#define n 4
using namespace std;

int main(){
	int i,j;
	int a[n];
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	cout<<"Matrix: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				printf("%d ",a[i]);
			}
			else
				printf("0 ");
		}
		cout<<endl;
	}
	return 0;
	
}
