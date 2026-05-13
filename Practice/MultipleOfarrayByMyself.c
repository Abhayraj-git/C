#include<stdio.h>
void calculate (int r1,int c1,int r2,int c2,int arr1[r1][c1],int arr2[r2][c2])
{
    printf("Enter the value of array 1 :-");
    int mult[r1][c2];
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            mult[i][j]=0;
        }
    }
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
     printf("Enter the value of array 2 :-\n");
    for (int i=0;i<r2;i++)
    {
        for (int j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    if (c1==r2)
    {
        
        {
            for (int i=0;i<r1;i++)
            {
                for (int j=0;j<c2;j++)
                {
                    for (int k=0;k<c1;k++)
                    mult[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
    }
    else
    {
        printf("The multiple matrix is not possible .");
        return ;
    }
    printf("The multiple matrix is :-\n");
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
    return ;
}
int main ()
{
    int r1;
    printf("Enter the value of row in array 1 : -");
    scanf("%d",&r1);
    int c1;
    printf("Enter the value of column in array 1 : -");
    scanf("%d",&c1);
    int r2;
    printf("Enter the value of row in array 2 : -");
    scanf("%d",&r2);
    int c2;
    printf("Enter the value of column in array 2 : -");
    scanf("%d",&c2);
    int arr1[r1][c1];
    int arr2[r2][c2];
    calculate(r1,c1,r2,c2,arr1,arr2);
    return 0;
}