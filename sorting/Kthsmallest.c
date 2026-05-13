#include<stdio.h>
int main ()
{
    int arr []={1,3,4,7,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

     for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for (int i=0;i<n-1;i++)
    {
        for (int j=i;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
     for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("%d",arr[3]);
    return 0;
}