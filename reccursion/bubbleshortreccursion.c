#include <stdio.h>
int A[10];
int bubbleRecursion(int n)
{
    int i,j,temp;
    if (n==1)
    {
        return 0;
    }
    for ( j = 0; j < n-1; j++)
    {
        if (A[j]>A[j+1])
        {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
        
    }
    bubbleRecursion(n-1);  
    return 0; 
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);
    }
    bubbleRecursion(10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
