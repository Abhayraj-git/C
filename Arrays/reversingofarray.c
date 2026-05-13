#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for (int i=0;i<n;i++)
{
    printf("Element no %d is : ",i+1);
    scanf("%d",&arr[i]);
    
}
for (int i=n-1;i>=0;i--)
{
    arr1[i]=arr[n-i-1];
}
for (int i=0;i<n;i++)
{
    printf("%d  ",arr1[i]);
}

    return 0;
}