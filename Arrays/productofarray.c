#include<stdio.h>
int main ()
{
    long long  n,product=1;
    printf("Enetr the value of n : ");
    scanf("%lld",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Element no %d is : ",i+1);
      scanf("%d",&arr[i]);
      product=product*arr[i];
    }
    printf("The product of given array is : %lld ",product);
    return 0;
}
