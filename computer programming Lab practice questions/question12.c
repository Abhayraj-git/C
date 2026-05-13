//  Write a program in C to find the missing number in a given array. There are no duplicates in the list.
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of array :-\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum_1=0;
    int sum_2=0;
    for (int i=0;i<n;i++)
    {
        sum_1+=arr[i];
    }
    sum_2=n*(n+1)/2;
    if (sum_1==sum_2)
    {
        printf("There is no missing number .");
    }
    else 
    {
        printf("The missing number is : %d",sum_2-sum_1);
    }
    return 0;
}