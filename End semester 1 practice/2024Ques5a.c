#include<stdio.h>
int main ()
{
    int n ; 
    printf("Enter the value of n : ");
    scanf("%d",&n);
    if (n<=1)
    {
        printf("No prime number exists ");
    }
    else 
    {
    for (int i=2;i<=n;i++)
    {
        int count = 0 ;
    for (int j=2;j<i;j++)
    {
        if (i%j==0)
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d  ",i);
    }
    }
    }
    return 0;
}