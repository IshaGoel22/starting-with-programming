#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
   int sparse[10][10],transpose[10][10];
   int m,n,p,q,t,col,element;
   int i,j;
   cout<<"Enter the number of rows and columns : ";
   cin>>m>>n;
   t=0;
	// assigning the value of matrix
 
   cout<<"\nEnter the matrix:\n";
   for(i=1;i<=m;i++)
   {
      for(j=1;j<=n;j++)
      {
	 cin>>element;
	 if(element!=0)
	 {
	    t=t+1;
	    sparse[t][1]=i;
	    sparse[t][2]=j;
	    sparse[t][3]=element;
	 }
      }
   }
   cout<<"\n\nThe sparse matrix is :\n\nRow\tColumn\tElement";
 
// displaying the matrix of non-zero value
   cout<<"\n\n"<<m<<"\t"<<n<<"\t"<<t<<"\n\n";
   for(i=1;i<=t;i++)
   {
      cout<<sparse[i][1]<<"\t"<<sparse[i][2]<<"\t"<<sparse[i][3]<<"\n";
   }
   sparse[0][1]=n; sparse[0][2]=m; sparse[0][3]=t;
   q=1;
 
// transpose of the matrix
   if(t>0)
   {
      for(i=1;i<=n;i++)
      {
	 for(j=1;j<=t;j++)
	 {
	    if(sparse[j][2]==i)
	    {
		transpose[q][1]=sparse[j][2];
		transpose[q][2]=sparse[j][1];
		transpose[q][3]=sparse[j][3];
		q=q+1;
	    }
	 }
      }
   }
 
   cout<<"\n\nThe transpose of the sparse matrix :\n ";
   cout<<"\nRow\tColumn\tElement\n\n";
   cout<<sparse[0][1]<<"\t"<<sparse[0][2]<<"\t"<<sparse[0][3]<<"\n\n";
   for(i=1;i<=t;i++)
   {
      cout<<transpose[i][1]<<"\t"<<transpose[i][2]<<"\t"<<transpose[i][3]<<"\n";
   }
   getch();
}
