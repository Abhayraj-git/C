#include<stdio.h>
int power (int x, int y)
{
    int funtion;
    if (y==0)
    {
        return 1;
    }
    else 
    {
        funtion=x*power(x,y-1);
        return funtion;
    }
}
int main ()
{
    int a;
    printf("Enter The value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter The value of b : ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d",p);
    return 0;
}