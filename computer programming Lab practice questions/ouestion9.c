// Write a program in C to accept two matrices and check whether they are equal.
#include<stdio.h>
int main ()
{
    int r,c;
    printf("Enter the value of rows : ");
    scanf("%d",&r);
    printf("Enter the value of column : ");
    scanf("%d",&c);
    int arr1[r][c],arr2[r][c];
    printf("Enter the value of array 1 in the : - \n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the value of array 2 in the : - \n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int count=0;
    for (int i=0;i<r && count==0;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (arr1[i][j]!=arr2[i][j])
            {
                printf("The arrays are unequal .");
                count=1;
                break;
            }
        }
    }
    if (count==0)
    {
        printf("The given arrays are equal  .");
    }
    return 0;
}