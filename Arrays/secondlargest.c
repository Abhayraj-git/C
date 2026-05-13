#include<stdio.h>
#include<limits.h>
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
    int max=INT_MIN;
    int smax=INT_MIN;
    for (int i=0;i<n;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Maximum value : %d\n",max);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max && smax<arr[i])
        {
            smax=arr[i];
        }
    }
    printf("The second largest value is : %d\n",smax);
    return 0;
}