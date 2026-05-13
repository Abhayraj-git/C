// Write a program in C to count the total number of duplicate elements in an array.
#include<stdio.h>
int main ()
{
    int n;
    int i;
    printf("Enter the Number of value in given array : ");
    scanf("%d",&n);
    int arr[n];
    int visited[n];
    printf("Enter Number in array :- \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    int count;
    for (i=0;i<n;i++)
    {  
        count=0;
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
         printf("The %d of duplicate elements are : %d\n",arr[i],count);

    }
   
    return 0;
}