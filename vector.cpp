// This is the code for the problem statement:

// There will be some integers given in each line of the input,the no. of lines is not specified …
// you have to put them in a vector

#include <iostream>
#include<vector>
using namespace std;
int main(){

int a;

vector<int> vec;

while(cin>>a)

{

vec.push_back(a);

}

for(int i=0;i<vec.size();i++)

{

cout<<vec[i]<<" ";

}

//distance(vec.begin(),unique(vec.begin(),vec.end()));  //distance gives size and uniques del all duplicates

}

/* Size of 2d vector
row = vector.size();
column = vector[0].size();  //row 0 me kitne elements h = no. of columns
*/
