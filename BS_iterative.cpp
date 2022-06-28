#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the sorted array: \n";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int x;
    cout << "Value to be search: \n";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}