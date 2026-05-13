// Write a program in C to find the two repeating elements in a given array.
// Expected Output :
// The given array is : 2 7 4 7 8 3 4
// The repeating elements are: 7 4
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    int visited[n];
    printf("Enter the value of array : \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
     printf("The repeating elements are : ");
    for (int i=0;i<n;i++)
    {
        int count = 0;
        if (visited[i]==1)
        {
            continue;
        }
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
               count++;
               visited[j]=1;
            }
        }
        // printf("\n");
        if (count==1)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}