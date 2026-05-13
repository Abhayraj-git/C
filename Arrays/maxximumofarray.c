#include<stdio.h>
int main ()
{
    int n,max=-1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Element no %d is : ",i+1);
        scanf("%d",&arr[i]);
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("the maximum value in this array is %d : ",max);
    return 0;
}