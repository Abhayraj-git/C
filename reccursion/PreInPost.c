#include<stdio.h>
void PiP(int x)
{
    if (x==0)
    {
        return ;
    }
    else
    {
        printf("%d\n",x);
        PiP(x-1);
        printf("%d\n",x);
        PiP(x-1);
        printf("%d\n",x);
    }
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    PiP(n);
    return 0;
}