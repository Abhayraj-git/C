// Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>
int main ()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
   int arr[n],oddcount=0,evencount=0,arr1[n],arr2[n];
    printf("Enter the value of array :- \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for (int i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            arr2[evencount++]=arr[i];
        }
        else 
        {
            arr1[oddcount++]=arr[i];
        }
    }
    printf("The odd number are :- \n");
    for (int i=0;i<oddcount;i++)
    {
        printf("%d  ",arr1[i]);
    }
    printf("\n");
    printf("The even number are :- \n");
    for (int i=0;i<evencount;i++)
    {
        printf("%d  ",arr2[i]);
    }
    return 0;
}