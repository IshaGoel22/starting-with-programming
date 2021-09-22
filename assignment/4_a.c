#include<stdio.h>

void reverse(int *arr,int n){
    int i;
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
int main(){
	int i;
    int arr[] = {9,8,7,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("size of array: %d\n",n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverse(arr,n);
    
    return 0;
}
