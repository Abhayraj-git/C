#include<stdio.h>
int main ()
{
    int n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for ( i=0;i<n;i++)
    {
        printf("Element no %d is ",i+1);
        scanf("%d",&arr[i]);
        
    }
    for (i=0;i<n;i++)
    {
    if (arr[i]<35)
        {
            printf("%d   ",i);
        }
    }
    return 0;
}