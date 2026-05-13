#include<stdio.h>
int main ()
{
    int arr[]={1,3,5,0,0,0,3,4,5};
    int arr1[100];
    int n =sizeof(arr)/sizeof(arr[0]);
    int idx=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
               arr1[idx]=arr[i];
               idx++;
        }
    }
    for (int i=idx;i<n;i++)
    {
        arr1[i]=0;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}