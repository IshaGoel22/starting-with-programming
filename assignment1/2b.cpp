#include<iostream>
using namespace std;
int t=0;
//Representaion using triplet or 3 tuple representation of sparse matrix
void display(int ar[4][4]){ //to recieve 2d array as arguments //pointer method-->(*ar)[4]  //subscript method--? ar[4][4]
    cout<<"Row Col Val"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(ar[i][j] !=0){
            	t++;
			}
        }
    }
    cout<<" "<<"4  "<<"4  "<<t<<endl;
    t=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(ar[i][j] !=0){
                cout<<" "<<i<<"  "<<j<<"   "<<ar[i][j]<<endl;
            }
        }
    }
}

int main(){
    int a[4][4]= {
        {0,0,9,0},
        {2,4,0,0},
        {0,0,4,0},
        {6,0,0,0},
    };

    int b[4][4]= {
        {0,2,0,0},
        {0,7,0,3},
        {0,0,2,0},
        {1,0,0,4},
    };

    int c[10][10];

    cout<<"First Matrix: "<<endl;
    display(a);

    cout<<"Second Matrix: "<<endl;
    display(b);

    //Addition of two sparse matrix
    cout<<"Sum: "<<endl<<"Row Col Val"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j] != 0 || b[i][j]!=0){
                 c[i][j] = a[i][j] + b[i][j];
                cout<<" "<<i<<" "<<j<<" "<<c[i][j]<<endl;
            }
        }
    }
    
    return 0;
}
