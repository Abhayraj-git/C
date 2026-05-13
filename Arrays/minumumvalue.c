#include<stdio.h>
int main ()
{
    int n;
    printf(" Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
      printf("Element no %d is : ",i+1);
      scanf("%d",&arr[i]);  
    }
    int min=arr[0];
    for (int i=1;i<n;i++)
    {
     if (min>arr[i])
        {
           min = arr[i];
        }
        
    }
    printf("%d ",min);
    
    return 0;
}