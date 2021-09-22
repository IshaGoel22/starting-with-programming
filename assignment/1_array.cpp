#include<stdio.h>
#include<conio.h>

void create(int k)
{
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        printf("Enter element at %d index: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Array created: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    // return *arr;
}

void insertarr(int arr[], int num, int index, int n)
{
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = num;
    n++;
    printf("Array create: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void display(int *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%d ", arr[i]);
    }
}

void deletearr(int *arr, int n, int index)
{
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("\n");
    n--; 
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int search(int arr[], int no, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == no)
        {
            printf("Element found\n");
            count++;
            break;
        }
    }
    return count;
}

//create display insert delete search exit
int main()
{
    int arr[100] = {1, 4, 7, 8, 9};
    int n = 5;
    printf("Size of array: %d", n);
    while (1)
    {
        printf("\nSelect one operation: \n 1.create\n 2.display\n 3.insert\n 4.delete\n 5.search\n 6.exit\n");
        int select;
        printf("Your selection: ");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            int k;
            printf("Enter size of array: ");
            scanf("%d", &k);
            create(k);
            break;
        case 2:
            display(arr);
            break;
        case 3:
            int num, ind;
            printf("Enter element to be inserted: ");
            scanf("%d", &num);
            printf("index: ");
            scanf("%d", &ind);
            insertarr(arr, num, ind, n);
            break;
        case 4:
            int index;
            display(arr);
            printf("\nEnter index: ");
            scanf("%d", &index);
            deletearr(arr, n, index);
            break;
        case 5:
            int ele;
            printf("Enter element to search: ");
            scanf("%d", &ele);
            int found;
            found = search(arr, ele, n);
            if (!found)
            {
                printf("Element not found\n");
            }
            break;
        case 6:
            printf("You entered 6, so terminated\n");
            break;
        default:
            printf("Enter no. between 1 to 6");
        }
        if (select == 6)
        {
            break;
        }
    }
    return 0;
}
