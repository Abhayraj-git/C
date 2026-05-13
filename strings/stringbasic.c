#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    char arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter the element no %d : ",i);
        scanf("%s",&arr[i]);
        printf("\n");
    }
    for (int i=0;i<n;i++)
    {
        printf("%c ",arr[i]);
    }
    return 0;
}