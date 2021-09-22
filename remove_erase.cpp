#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int a;
	vector<int> nums;
	for(int i=0;i<5;i++){
		cin>>a;
		nums.push_back(a);
	}
	int val=2;
	 nums.erase(remove(nums.begin(), nums.end(), val),nums.end());  
	 cout<<"size: "<<nums.size() ;     
}
