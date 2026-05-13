#include<stdio.h>
int main ()
{
    int arr[]={3,4,2,1,6,9,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    // Selection Sort

    for (int i=0;i<n-1;i++)
    {
        int minidx = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[minidx]>arr[j])
            {
                minidx=j;
            }
        }
        if (minidx!=i)
        {
                int temp = arr[i];
                arr[i]=arr[minidx];
                arr[minidx]=temp;
        }
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}