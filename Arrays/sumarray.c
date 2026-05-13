#include<stdio.h>
int main ()
{
    int n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
{
    printf("Enetr the element no  %d:  ",i+1);
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("%d",sum);
    return 0;
}