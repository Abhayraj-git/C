// Function Accepting 2D Array Through Pointer and Finding Sum of Diagonal


#include<stdio.h>
int Accept(int r,int c,int arr[r][c])
{
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum =0;
    int j=0;
    int i=0;
     while (i<r && j<c)
     {
        sum+=arr[i][j];
        j++;
        i++;
     }
     return sum;
}
int main ()
{
    int r;
    printf("Enter the number of rows in 2d array:-");
    scanf("%d",&r);
    int c;
    printf("Enter the number of column in 2d array:-");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the Value in Array :-\n");
    int x=Accept(r,c,arr);

    printf("%d",x);
    return 0;
}