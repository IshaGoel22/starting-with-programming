#include <stdio.h>
 
int main()
{
	int i, j, k, Size;
	
	printf("Enter Number of elements in an array  : ");
	scanf("%d", &Size);
	
	int arr[Size];
	
	printf("Enter elements of an Array \n");
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
	}     
 
	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < Size; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				Size--;
				
			}
		}
	}

 	printf("Array after Deleteing Duplicate Elements is:\n");
 	for (i = 0; i < Size; i++)
  	{
 		printf("%d ", arr[i]);
  	}	     
 	return 0;
}
