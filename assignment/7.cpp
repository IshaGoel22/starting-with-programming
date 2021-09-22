#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array: "<<n<<endl;
    int sum;
    sum = ((n+1)*(n+2))/2;  //one no. is missing so n+1 total size of array
    printf("Sum of first %d natural no.= %d\n",n,sum);
    
    for(int i=0;i<n;i++){
        sum -= arr[i];  //subtracting sum of elements in given array from sum of first n natural no.
    }
    printf("missing no=%d",sum);

    return 0;
}