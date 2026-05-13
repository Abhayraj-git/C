#include<stdio.h>
int main ()
{
    int r;
    printf(" Enter the value of n : ");
    scanf(" %d",&r);
    int c;
    printf( "Enter the value of c : ");
    scanf("%d",&c);
    int a[r][c];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf(" Enter the element no (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            a[i][j]=10;
            printf("(%d,%d) : ",i,j);
             printf("%d \n",a[i][j]);
        }
    }
   
    return 0;
}