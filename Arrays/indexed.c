#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Element no %d is : ",i+1);
        scanf("%d",&arr[i]);
    }
    int oddindexed,evenindexed,i;
    for (i=0;i<n;i++)
    {
    if (i%2==0)
    {
     evenindexed=arr[i]+10;
     printf("%d \n",evenindexed);
    }
    else
    {
    oddindexed=arr[i]*2;
        printf("%d \n",oddindexed);
    }
    }
    return 0;
}