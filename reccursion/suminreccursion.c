#include<stdio.h>
int summation (int x)
{
    int sum;
    if (x<=0)
    {
        return x;
    }
    else
    {
    sum=x + summation(x-1);
     return sum;
    }
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
   int y = summation(n);
   printf("%d",y);
    return 0;
}