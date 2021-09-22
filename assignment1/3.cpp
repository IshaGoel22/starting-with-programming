#include <iostream>
using namespace std;

int main() {
	int a[3][3] = {
		{1,2,3},
		{2,4,1},
		{0,1,2},
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
	cout<<"sum: \n";
	for(int i=0;i<n;i++)
	{
	    int s=0;
	    int s1=0;
	    for(int j=0;j<n;j++)
	    {
	        s+=a[i][j];
	        s1+=a[j][i];
	    }
	    cout<<s<<" "<<s1<<" ";
	    cout<<endl;
	}
	return 0;
}
