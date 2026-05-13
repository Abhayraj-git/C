// Write a program in C to find a pair with given sum in the array.
#include<stdio.h>
int main ()
{
   int n;
   printf("Enter the value of n : ");
   scanf("%d",&n);
   int x;
   printf("Enter the value of x : ");
   scanf("%d",&x);
   int arr[n];
   printf("Enter the value of array :-\n");
   for (int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int count=0;
   for (int i=0;i<n;i++)
   {
    for (int j=i+1;j<n;j++)
    {
        if (arr[i]+arr[j]==x)
        {
            count=1;
            printf("The pair %d and %d have sum equals to x .\n",i+1,j+1);
        }
    }
   }
   if (count==0)
   {
    printf("There's not a single pair whose sum is equal to x .");
   }
    return 0;
}
