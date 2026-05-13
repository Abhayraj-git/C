#include<stdio.h>
int main ()
{
    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int c;
    printf("Enter the value of c : ");
    scanf("%d",&c);
    int a1[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the element (%d,%d) : ",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int y;
    printf("Enter the value of y : ");
    scanf("%d",&y);
    int a2[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("Enter the element (%d,%d) : ",i,j);
            scanf("%d",&a2[i][j]);
        }
    }
    int result[r][c];
    if (r==x && c==y )
    {
         for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            result[i][j]=a1[i][j]+a2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    }
    else 
    {
        printf("Matrix determinent must be equal to them.");
    }

    return 0;
}