#include<stdio.h>
int main ()
{
    int r,c;
    printf("Enter the value of rows : ");
    scanf("%d",&r);
    printf("Enter the value of column: ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf(" Element no (%d , %d) is : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
     for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}