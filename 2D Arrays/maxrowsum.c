#include<stdio.h>
int main ()
{
    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int c;
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Enter the value of  arrays\n");
    int a[r][c];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Element no (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int maxsum=-1000000;
     int row=0;
     for (int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
    if (sum>maxsum)
    {
        maxsum=sum;
    }   
    }
    printf("Maximum sum is : %d and row is : %d",maxsum,row);
    
    
    return 0;
}