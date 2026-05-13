#include<stdio.h>
int power (int x ,int y)
{
    int c;
    if (y==0)
    {
        return 1;
    }
    int p = power(x,y/2);
    if (y%2==0)
    {
     c =p*p;
    }
    else
    {
     c = p*p*x;
    }
    return c;
}
int main ()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int z = power(a,b);
    printf("%d",z);
    return 0;
}