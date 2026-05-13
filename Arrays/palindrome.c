#include<stdio.h>
int main ()
{
    int n,palindrome=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Element no %d is : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (arr[i]==arr[n-1-i])
        {
            palindrome++;
        }
    }
    if (palindrome>0)
    {
        printf("The given array is an palindrome ");
    }
    else 
    {
    printf("The given array is not an palindrome ");
    }
    return 0;
}