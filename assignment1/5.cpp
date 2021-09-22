#include <iostream>
using namespace std;

int main() {
	int m=2,n=3;
	int a[m][n] = {
		{2,5,8},
		{4,0,-1},
		// {2,1,0,4},
	};
	//printing matrix
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"Spiral order: \n";
	int top=0,down=m-1,left=0,right=n-1;
	while(top<=down && left<=right)
	{
	    for(int i=left;i<=right;i++)
	    {
	        cout<<a[top][i]<<" ";
	    }
	    top++;
	    for(int i=top;i<=down;i++)
	    {
	        cout<<a[i][right]<<" ";
	    }
	    right--;
	    if(top<=down)
	    {
	        for(int i=right;i>=left;i--)
    	    {
    	        cout<<a[down][i]<<" ";
    	    }
    	    down--;
	    }
	    if(left<=right)
	    {
	       for(int i=down;i>=top;i--)
    	    {
    	        cout<<a[i][left]<<" ";
    	    }
    	    left++; 
	    }   
	}
	return 0;
}
