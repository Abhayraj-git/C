// Write a program in C to count the frequency of each element of an array
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    int i;
    int visited[n];
    printf("Enter the value in array : \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for (i=0;i<n;i++)
    {
        int count=0;
        if (visited[i]==1)
        {
            continue;
        }
        for (int j=0;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
         printf("frequncy of number %d is %d .\n",arr[i],count);
    }
    return 0;
}