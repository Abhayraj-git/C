#include<stdio.h>
int fibb(int x)
{
    if (x==1 || x==2)
    {
        return 1;
    }
    else 
    {
        int y = fibb(x-1)+fibb(x-2);
        return y;
    }
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int z = fibb(n);
    printf("%d",z);
    return 0;
}