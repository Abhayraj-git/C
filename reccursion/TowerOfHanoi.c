#include<stdio.h>
void tower (int x ,char p , char q, char r)
{
    if (x==0)
    {
        return ;
    }
    else 
    {
    tower (x-1,p,r,q);
    printf("%c -> %c\n",p,r);
    tower (x-1,q,p,r);
    return ;
    }
}
int main ()
{
    int n;
    printf("Enter number of disks : ");
    scanf("%d",&n);
    tower(n ,'A','B','C');
    return 0;
}