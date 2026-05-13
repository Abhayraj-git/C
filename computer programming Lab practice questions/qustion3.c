// Write a program in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
int main ()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    int i;
    printf("Enter the array 1 :- ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array 2 :- ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (arr1[j]<arr1[j+1])
            {
            int temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
            }
        }
    }
    for (i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
           if (arr2[j]<arr2[j+1])
           {
            int temp=arr2[j];
            arr2[j]=arr2[j+1];
            arr2[j+1]=temp;
           }
        }
    }
    int merged_arr[n];
    for (i=0;i<n;i++)
    {
        merged_arr[i]=arr1[i]+arr2[i];
    }
    for (i=0;i<n;i++)
    {
        printf("%d  ",merged_arr[i]);
    }
    return 0;
}