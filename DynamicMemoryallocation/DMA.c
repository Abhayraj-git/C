#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr = (int*)calloc(10,sizeof(int)); // Allocation of Dynamic memory allocation.
    printf("%d",*ptr);
}