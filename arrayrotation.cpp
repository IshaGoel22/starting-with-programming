#include <bits/stdc++.h>
using namespace std;

//Function to left Rotate array of size n by 1
void leftRotatebyOne(int arr[], int n)  // 1 2 3 4 5
{ 							
	int temp = arr[0], i;   //temp =1
	for (i = 0; i <= n - 1; i++)  //0  1  2 3
		arr[i] = arr[i + 1];  //ar[0] = 2  //arr[1]=3 //arr[2]=4  //arr[3] = 5

	arr[n-1] = temp;  //arr[4] = 1
}

void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);  //calling function d times
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	leftRotate(arr, 2, n);
	printArray(arr, n);

	return 0;
}

