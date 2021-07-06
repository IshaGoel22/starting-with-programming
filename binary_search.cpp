//binary_search function works on sorted array and exist in #include<algorithm> library
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[]={2,6,8,9,5};
	sort(a,a+5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	if(binary_search(a,a+5,9)){
		cout<<"9 exist"<<endl;
	}
	else
	 cout<<"no"<<endl;
}