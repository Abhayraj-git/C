#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr;
    int sum,n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int)*n);
    for (i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum=sum+(*ptr+i);
    }
    printf("The sum is %d",sum);
    free(ptr);
    return 0;
}