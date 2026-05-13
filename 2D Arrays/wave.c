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
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("Element no (%d,%d) : ",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
    printf("The wave of array a1 is : \n");
    for (int j=0;j<c;j++)
    {
      if (j%2==0)
      {
        for (int i=0;i<r;i++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
      }
      else
      {
        for (int i=r-1;i>=0;i--)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
      }
    }
    return 0;
}