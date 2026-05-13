
// some error 


#include<stdio.h>
int main ()
{
    int arr[]={1,2,3,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                 arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int arr1[n];
    for (int i=n-1;i>=0;i--)
    {
        arr1[i]=arr[i];
    if (arr1[i]!=arr1[i-1])
    {
    int temp = arr1[i];
    arr1[i]=arr1[i-1];
    arr1[i-1]=temp;
    }
    else
    {
        continue;
    }
   }
   int number1=0;
   for ( int i=0;i<n-1;i++)
   {
    number1= number1*10 + arr[i];
   }
   int number2=0;
   for ( int i=0;i<n-1;i++)
   {
    number2= number2*10 + arr1[i];
   }

   int sum ;
   sum =number1+number2;
   printf("%d",sum);
    return 0;
}