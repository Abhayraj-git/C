#include<stdio.h>
int cube ( int x )
{
    int y =0;
    if (x==1)
    {
        return 1;
    }
    else 
    {
        y += x*x*x + cube(x-1);
    }
    return y;
}
int main ()
{
    int n;
    printf("Ente the value of n : ");
    scanf("%d",&n);
    int result ;
    result = cube(n);
    printf("The sum of cube of first n natural number is : %d ",result);
    return 0;
}