#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int beg, int end)
{
    int mid;
    if (beg > end)
    {
        cout << "Element is not found";
        return 0;
    }
    else if (beg == end)
    {
        if (arr[beg] == num)
        {
            return beg;
        }
        else
            return 0;
    }
    else
    {
        mid = (beg + end) / 2;

        if (arr[mid] == num)
        {
            cout << "Number found at " << mid << " index \n";
            return 0;
        }
        else if (num > arr[mid])
        {
            BinarySearch(arr, num, mid + 1, end);
        }
        else
        {
            BinarySearch(arr, num, beg, mid - 1);
        }
    }
}

int main()
{
    int num, i, n, beg, end;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the sorted array: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Value to be search: \n";
    cin >> num;

    beg = 0;
    end = n - 1;
    BinarySearch(arr, num, beg, end);

    return 0;
}