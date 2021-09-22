#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter value of n: ";
	cin>>n;
	int a[n][n];
	int sr=0,er=n-1,sc=0,ec=n-1;
	int count=1;
	while(sr<=er && sc<=ec)
	{
	    for(int i=sc;i<=ec;i++)
	    {
	        a[sr][i]=count;
	        count++;
	    }
	    sr++;
	    for(int i=sr;i<=er;i++)
	    {
	        a[i][ec]=count;
	        count++;
	    }
	    ec--;
	    if(sr<er)
	    {
	        for(int i=ec;i>=sc;i--)
    	    {
    	        a[er][i]=count;
    	        count++;
    	    }
    	    er--;
	    }
	    if(sc<ec)
	    {
	       for(int i=er;i>=sr;i--)
    	    {
    	        a[i][sc]=count;
    	        count++;
    	    }
    	    sc++; 
	    }
	    
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
