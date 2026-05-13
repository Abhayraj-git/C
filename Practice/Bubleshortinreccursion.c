#include<stdio.h>
void bubble (int n,int arr[])
{
    printf("Enter the value of array :-");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return ;
}
int main ()
{
    int n;
    printf("The number of value u want to put in array :-");
    scanf("%d",&n);
    int arr[n];
    bubble(n,arr);
    return 0;
}