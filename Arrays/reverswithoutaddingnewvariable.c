#include<stdio.h>
void reverse(int arr[])
{
    int i=0;
    int j=6;
    while (i<j)
    {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    }
    return;
}

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
    reverse(arr);
    for (int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}