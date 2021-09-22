#include<iostream> 
using namespace std; 

int A[10][10],mul[10][10],B[10][3],C[10][10],i,j,r,c,k=1,m=0;

void sparse(int A[][10])
{ 
    k=1,m=0; 
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++){
	        if(A[i][j]!=0){
	            B[k][0]=i;
	            B[k][1]=j; 
	            B[k][2]=A[i][j];
	            k++; m++;
	        }
	    }
	}
    B[0][0]=r;
    B[0][1]=c; 
    B[0][2]=m;
    cout<<"Sparsed matrix in triplet form :\n";
    for(i=0;i<k;i++){
        for(j=0;j<3;j++){ cout<<B[i][j]<<" ";
        }
    cout<<endl;
    } 
    } 
    
    void InputSparse()
    { 
	cout<<"Enter the elements for the matrix 1:\n"; 
	for(i=0;i<r;i++)
    for(j=0;j<c;j++) 
    cin>>A[i][j];
    sparse(A); 
    cout<< "Enter the elements for the matrix 2:\n"; for(i=0;i<r;i++)
    for(j=0;j<c;j++) cin>>C[i][j];
    sparse(C);
    } 
    

    void mulsparse()
    { 
    InputSparse();
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) 
        {
        mul[i][j]=0;
        for(k=0;k<c;k++)
        mul[i][j]+=A[i][k]*C[k][j];
        } 
        cout<<"Product Sparse Matrix in triplet Representation is:\n"; sparse(mul);
    } 
    
    int main()
    { 
        cout<<"Enter the no. of row and column of matrix A :\n"; 
        cin>>r>>c; 
		mulsparse();
        return 0;
    } 
