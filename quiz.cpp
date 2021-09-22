#include<iostream>
using namespace std;

int main(){
	int p[6] = {14,9,4,9,8,9};
	int n=6;
	
	int a=0,b=n-1;
	while(a !=b){  
		a = (p[a] > p[b]) ? a+1 : a;  // 14>9   a=1 //9>8  a=2
		b = (p[a] <= p[b]) ? b-1 :b; //9=9 b=n-2  //4<8 b =n-3  
	}
	cout<<p[a];   //minimum
	
}
