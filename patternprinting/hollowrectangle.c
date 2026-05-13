#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=x;j++)
        {
            if(i==1 || i==n || j==1 ||j==n)
            {
                 printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}