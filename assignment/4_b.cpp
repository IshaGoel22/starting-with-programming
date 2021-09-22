#include <iostream>
using namespace std;

int main()
{
    int res[2][3],sum=0;
    int ar1[2][3] = {
        {0, 1, 2},
        {4, 1, 0}};
    int ar2[3][2] = {
        {2, 1},
        {2, 0},
        {1, 3}};
    printf("ar1: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ar1[i][j]);
        }
        printf("\n");
    }
    printf("ar2: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d ", ar2[i][j]);
        }
        printf("\n");
    }

    //multiply
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += ar1[i][k] * ar2[k][j];
            }
            res[i][j] = sum;
            sum =0;
            // printf("\t");
        }
        // printf("\n");
    }

    printf("Multiply: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    } 

    return 0;
}