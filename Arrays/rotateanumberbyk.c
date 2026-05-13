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
        printf("Elemrnt no %d is : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=1,j=10;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
   for(int i=0;i<n;i++)
   {
    printf("%d  ",arr[i]);
   }
    
    return 0;
}
    */
   
   
   
#include<stdio.h>
int main ()
{
    int n,k=5,temp;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Elemrnt no %d is : ",i+1);
        scanf("%d",&arr[i]);
    }
    k=k%n; // how many array to be rotate 
    for (int i=0,j=n-1;i<j;i++,j--) // for revesing whole array
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
for (int i=0,j=k-1;i<j;i++,j--)// for rotating first half
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i=k,j=n-1;i<j;i++,j--) // for rotating remaning half
       {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
    
    for (int i=0;i<n;i++)
    {
    printf("%d  ",arr[i]);
    }
    return 0;
}