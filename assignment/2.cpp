#include <iostream>
using namespace std;

void deletea(int arr[], int n,int index)
{
    int i;
    for (i = index; i < n ; i++)
    {
        arr[i] = arr[i + 1];
    }
    n-1;
    for (i = 0; i < n ;i++)
    {
        cout<<arr[i]<<" ";
    }   
}

void duplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                deletea(arr, n,j);
                n--;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 5, 9, 3, 5, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Size of array: "<<n<<endl;
    duplicate(arr, n);
    return 0;
}
