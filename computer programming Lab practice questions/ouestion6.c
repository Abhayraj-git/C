// Write a program in C to find the sum of rows and columns of a matrix.
#include<stdio.h>
int main ()
{
    int r,c,sum_rows=0,sum_column=0;
    printf("Enter the value of rows : ");
    scanf("%d",&r);
    printf("Enter the value of column : ");
    scanf("%d",&c);
    int arr[r][c];
    int sum_rows[n],sum_column[n];
    printf("Enter the value of array in the : - \n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        sum_rows[i]=0;
    }
     for(int i=0;i<c;i++)
    {
        sum_column[i]=0;
    }
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            sum_column[i]+=arr[]
        }
    }

    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            sum_rows+=arr[j][i];
        }
    }

        printf("The of rows is :- ");
        printf("%d",sum_rows);
        printf("\n");
        printf("The of column is :- ");
        printf("%d",sum_column);
    
    return 0;
}