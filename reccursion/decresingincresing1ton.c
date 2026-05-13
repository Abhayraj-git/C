#include<stdio.h>
int funtion (int x)
{
    if (x==0)
    {
        return 0;
    }
    else 
    {
        printf("%d\n",x);
        funtion(x-1);
        printf("%d\n",x);
        return 0;
    }
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    funtion(n);
    return 0;
}