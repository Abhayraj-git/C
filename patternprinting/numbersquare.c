#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<x;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}