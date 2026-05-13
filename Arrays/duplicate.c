#include<stdio.h>
int main ()
{
    int n,value=0;
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
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d ",i+1);
              value++;
            }
            
        }
    }
    if(value>0)
    {
        printf(" is the duplicate elements .");
    }
    else 
    {
      printf("The given array does not have duplicate elements .");
    }
    return 0;
}