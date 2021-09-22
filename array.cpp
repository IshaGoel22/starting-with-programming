//three ways to pass 2D array
#include<iostream>
using namespace std;
void print(int a[2][5]){  //*a -->single pointer
	//(*a)[5]  -->pointer to an array
	//a[][5]  
	//a[2][5]
}
int main(){
	int a[2][5]={
				{1,2,3,4,5},
				{1,2,3,4,5},
			};
	print(a);   //(int *)a
}
