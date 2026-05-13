#include<stdio.h>
int main ()
{
    int arr[]={5,3,5,0,7,0,8,0,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (arr[j]==0)
            {
                int temp = arr[j] ;
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}