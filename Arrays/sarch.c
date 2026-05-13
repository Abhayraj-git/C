/*
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
    int x;
    int value=0; // to check wheather this element is present or not in this array
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for (int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            value++;
            printf("the given no is presnt at %dth postion \n",i+1);
        }
    }
    if (value>0)
    {
        printf("the number is present in the given array");
    }
    else 
    {
        printf("the number is not present in the given array");
    }
    return 0;
}
    */
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
    int sum1,sum2=0,x;
    sum1=n*(n+1)/2;
    for (int i=0;i<n-1;i++)
    {
sum2=sum2+arr[i];
    }
    if (sum1!=sum2)
    {
        x=sum1-sum2;
      printf("the missing number is %d ",x);
    }
    else 
    {
        printf("there is no mising number .");
    }
    return 0;
}