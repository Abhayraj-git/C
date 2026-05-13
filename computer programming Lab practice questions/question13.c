// Write a program in C to rotate an array by N positions.
// Expected Output :
// The given array is : 0 3 6 9 12 14 18 20 22 25 27
// From 4th position the values of the array are : 12 14 18 20 22 25 27
// Before 4th position the values of the array are : 0 3 6 9
// After rotating from 4th position the array is:
// 12 14 18 20 22 25 27 0 3 6 9
#include<stdio.h>
int main ()
{
    int n,k;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of array :-\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("THe origanal array before rotation from k'th position :-\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the postion k from where you want to roatate :-");
    scanf("%d",&k);
    printf("The array after rotation from k'th postion :- ");
    for (int i=k;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}