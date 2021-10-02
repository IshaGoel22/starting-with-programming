#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	 vector<int> arr = {1,4,1,1,0,0,2,4};

	 sort(arr.begin(),arr.end());
	arr.erase(unique(arr.begin(),arr.end()),arr.end());
	
for (auto m : arr)
cout << m << " ";
	// nums.erase(remove(nums.begin(), nums.end(), val), nums.end());   //remove all occurance of val
	
	return 0;
}
