#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int> &arr)
{
    int n = arr.size();
    if (n < 3)
        return false;
    int i = 0;
    for (i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
            break;
        if (arr[i] == arr[i + 1])
            return false;
    }
    if(i==0) return false;
    cout<<i<<" ";
    int j = i + 1;
    for (j = i + 1; j < n - 1; j++)
    {
        if (arr[j] == arr[j + 1])
            return false;
        if (arr[j] < arr[j + 1])
            break;
    }
    cout<<j<<" "<<n-2<<" ";
    if (j == n - 1)
        return true;
    return false;
}

int main()
{
    vector<int> arr = {9,8,7,6,5,4,3,2,1,0};
    cout<<validMountainArray(arr);
    return 0;
}