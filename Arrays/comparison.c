#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Element no %d is : ",i+1);
        scanf("%d",&arr[i]);
    }
    int x,number=0;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for (int i=0;i<n;i++)
    {
        if (x<arr[i])
        {
          number=number+1;
        }
    }
     if (number>0)
     {
            printf("number is greater than x : %d",number);
     }
    else
    {
       printf("No number is greater than x");
    }
     
    return 0;
}