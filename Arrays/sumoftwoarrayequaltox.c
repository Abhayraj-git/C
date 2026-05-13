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
    int sum,i,number=0;
    int x;
    printf(" Enter the value of x : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        sum=arr[i]+arr[i+1];
        if (x==sum)
        {
        number++;
        }

    }
    if (number>0)
    {
        printf("the sum of two array which is equal to x is  : ");
    printf("%d",number);
    }
    else 

    {
        printf("The addition of no two number is equal to x .");
    }
    return 0;
}
    */
   #include<stdio.h>
   int main ()
   {
    int n,x,total=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Elemnt no %d is : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j]==x)
            {
                total++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    
    printf("%d \n",total);
    return 0;
   }