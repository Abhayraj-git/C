#include<stdio.h>
void print (int x,int n)
{
    if(x>n) 
    {
    return ;
    }
    else
    {
    printf("%d \n",x);
    print(x+1,n);
     return ;
    }
}
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    print(1,n);
    return 0;
}