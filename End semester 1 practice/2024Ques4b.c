#include<stdio.h>
int fun ()
{
    static int count = 0;  // static remeber it's previous value it statrs from previous value every time when funtion strats fresly
    count ++;
    return count ;
}
int main ()
{
    printf("%d ",fun()); 
    printf("%d ",fun());

    return 0;
}