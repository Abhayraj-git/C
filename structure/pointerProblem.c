#include<stdio.h>
int main ()
{
    //int * a = &x,b=&y; (it means int*a=&x,int b=&y)
    typedef int* pointer;
    int x=1,y=2;
    pointer a = &x, b = &y;
    printf("%p\n",a);
    printf("%p\n",b);

    return 0;
}