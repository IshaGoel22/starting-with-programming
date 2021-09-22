#include <iostream>
using namespace std;

int main()
{
//    int sum = 0, res[2][2];
    int ar1[2][3] = {
        {0, 1, 2},
        {4, 1, 0}};
   	 printf("ar1: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ar1[i][j]);
        }
        printf("\n");
    }

    //transpose
    printf("Transpose:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d ", ar1[j][i]);
        }
        printf("\n");
    }
    return 0;
}
