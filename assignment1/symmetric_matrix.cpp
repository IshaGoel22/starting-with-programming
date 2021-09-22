#include<iostream> 
using namespace std;
# define n 3

void transpose(int A[n][n],int B[n][n])
{ 
    for (int i = 0; i < n; i++)
 	{ 
	    for (int j = 0; j < n; j++)
		{
	    	B[i][j]=A[j][i]; 
		}
 	}

} 
bool symmetric(int A[n][n],int B[n][n])
{ 
	for(int i=0;i<n;i++)
	
	{ 
		for(int j=0;j<n;j++)
	    {
		    if(A[i][j]!=B[i][j])
		    {
		    return false;
			}
		} 
		return true;
 	}
}

int main()
{ 
    int a[n][n],b[n][n];
    cout<<"Enter the elements of the matrix"<<endl;
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    transpose(a, b);
    if(symmetric(a,b))
    {
        cout<<"Yes ,matrix is symmetric"<<endl;
    }
    else { cout<<"No, matrix is not symmetric"<<endl;
 }
 return 0;

} 

/*
1 2 3
2 3 4
3 4 5*/
