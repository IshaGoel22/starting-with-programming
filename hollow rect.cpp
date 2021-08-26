<<<<<<< HEAD
//hollow rect
#include<iostream>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i==1 || i==row || j==1 || j==col){
				cout<<"*";
			}
			else
				cout<<" ";
		} 
		cout<<endl;
	}
	return 0;
}
=======
//hollow rect
#include<iostream>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i==1 || i==row || j==1 || j==col){
				cout<<"*";
			}
			else
				cout<<" ";
		} 
		cout<<endl;
	}
	return 0;
}
>>>>>>> fdd35bca5c1207c7f05fb71c13b254a685367170
