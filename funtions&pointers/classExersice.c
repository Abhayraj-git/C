#include<stdio.h>
int main ()
{
    int a=10,b=30;
    printf("%d\n",a);
    printf("%d\n",b);
    void swapp(int*x,int*y);
     swapp(&a,&b);
    return 0;
}

    void swapp(int*x,int*y)
    {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d\n",*x);
        printf("%d\n",*y);
 return ;
    }