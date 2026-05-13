#include<stdio.h>
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
    int evensum=0,oddsum=0,i;
    for (i=0;i<n;i++)
    {
        if (i%2==0)
        {
            evensum=evensum+arr[i];
        }
        else 
        {
            oddsum=oddsum+arr[i];
        }
    }
    printf("%d \n",evensum);
    printf("%d \n",oddsum);
    return 0;
}