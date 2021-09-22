#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> indices;

        for(int i= 0;i<nums.size();i++){
            for (int j = i+1; j < nums.size(); j++)
            {
                if( nums[i] + nums[j] == target ){
                    indices.push_back(nums[i]);
                    indices.push_back(nums[j]);
                    return indices;
                }
            }           
        }
        return indices;
    }
};

int main(){
    Solution indices;
    int a,t;
    vector<int> nums;
    vector<int> ind;
    while(cin>>a){
        nums.push_back(a);
    }
    //to display vector
    cout<<"num: "<<endl;
    for(auto j : nums){
        cout<<j<<" ";
    }
    cout<<endl;
    cout<<"target: \n";
    cin>>t;
    ind = indices.twoSum(nums,t);
    for(auto i : ind){
        cout<<i<<" ";
    }
}
