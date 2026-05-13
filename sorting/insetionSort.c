#include<stdio.h>
int main ()
{
    int arr[]={1,7,4,2,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=1;i<=n-1;i++)
    {
        int j=i;
        while(j>=1 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for (int i=0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}