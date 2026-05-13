 // Write a program in C to find the smallest missing element in a sorted array.
// Expected Output :
// The given array is : 0 1 3 4 5 6 7 9
// The missing smallest element is: 2
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of array : \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]!=i)
        {
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
