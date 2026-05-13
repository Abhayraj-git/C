#include<stdio.h>
void print (int n)
{
    if(n>=1) 
    {
    printf("%d \n",n);
    print(n-1);
     return ;
    }
    else
    return ;
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    print(n);
    return 0;
}