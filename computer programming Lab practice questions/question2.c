// Write a program in C to print all unique elements in an array.
#include<stdio.h>
int main ()
{
    int n;
    int i;
    printf("Enter the Number of value in given array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Number in array :- \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        int count=0;
        for (int j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
            count=1;
            break;
            }
        }
        if (count==0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}