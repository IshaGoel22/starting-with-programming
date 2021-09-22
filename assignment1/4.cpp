#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},	
	};
	int n=3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++)
    {
        int min=a[i][0];  
        int in;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<=min) 
            {
                min=a[i][j];  
                in=j;   
            }
        }
        int max=a[0][in];   
        for(int k=0;k<n;k++)
        {
            if(a[k][in]>=max)  
            {
                max=a[k][in];  
            }
        }
        if(max==min)  
            cout<<"saddle point: "<<max;  
    }
    return 0;
}

