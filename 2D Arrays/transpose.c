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
    
    
    int a2[c][r];
    for (int i=0;i<c;i++)
    {
        for (int j=0;j<r;j++)
        {
            a2[i][j]=a1[j][i];
            printf("%d  ",a2[i][j]);
        }
        printf("\n");
    }
    return 0;
}