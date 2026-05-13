//  Write a program in C to segregate 0s and 1s in an array.
// Expected Output:
// The given array is:
// 1 0 1 0 0 1 0 1 1
// The array after segregation is: 0 0 0 0 1 1 1 1 1
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
    printf("The given array is : ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
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
        printf("The given array after segration is : ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}