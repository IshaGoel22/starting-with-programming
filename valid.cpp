#include<iostream>
using namespace std;

int main(){
    char *exp = "((8)(*--$$9))";
    int cur =0;
    for(int i=0;i<exp[i]!='\0';i++){
        if(exp[i]=='('){
            cur++;
        }
        else if(exp[i]==')'){
            cur--;
        }
    }
    if(cur==0){
            cout<<"valid";
        }
        else
        cout<<"invalid";
    return 0;
}