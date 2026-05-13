// .Write a program in C to find the majority element of an array.
// A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
#include<stdio.h>
int main ()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int x=n/2;
    int arr[n];
    int count=0;
    printf("Enter the value's in array : \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for (int j=0;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>x)
                {
                    printf("Majority element is %d .",arr[i]);
                    break;
                }
    }
    return 0;
}