//remove val from vector array
#include<iostream>
#include<vector>
using namespace std;

    int removeElement(vector<int>& nums, int val) {
//    	 nums.erase(remove(nums.begin(), nums.end(), val), nums.end());        
//        //This has to be done to remove all the occurences.
//        return nums.size();
    	
        int l = nums.size(), k = 0;
        if (l==0){return 0;}
        for (int i=0; i<l; i++){
            if (nums[i] != val){nums[k++]=nums[i];} 
            // nums[0] !=2 .... nums[1] = nums[0]
            //nums[1] != 2....nums[2] = nums[1]
        }
		return k;
    }
    
int main(){
	int a,k;
	vector<int> vec;
	for(int i =0;i<5;i++){
		cin>>a;
		vec.push_back(a);
	}
	for(auto j:vec){
		cout<<j<<" ";
	}
	cout<<endl;
	k = removeElement(vec,2);
	cout<<"k : "<<k;
	return 0;
}

