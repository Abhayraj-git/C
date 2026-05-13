#include<stdio.h>
int stairs(int x)
{
    if (x==1)
    {
        return 1;
    }
    if (x==2) 
    {
        return 2;
    }
    else 
    {
        int totalways = stairs(x-1)+stairs(x-2);
        return totalways;
    }
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("%d",ways);
    return 0;
}