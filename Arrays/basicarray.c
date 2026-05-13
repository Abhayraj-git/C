#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      printf("Element no %d is ",i+1);
      scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++)
    {
      printf("%d ",arr[i]);
    }
    return 0;
}