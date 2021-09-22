#include<iostream>
#include<algorithm>
// #include <vector>

using namespace std;

int main(){
    // vector<int> arr ={1,2,3,5,6,9};
    // int n=6;
    int arr[] ={1,8,3,7,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Size of array: "<<n<<endl;
    sort(arr,arr+n);
    // sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int num;
    cout<<"Enter number to search: ";
    cin>>num;

    if(binary_search(arr,arr+n,num)){   //arr.begin(),arr.end(),element
        cout<<"Element found";
    }
    else
        cout<<"Element not found";
    return 0;
}
