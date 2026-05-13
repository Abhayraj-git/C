#include<stdio.h>
void GCD (int x ,int arr[x])
{

}
int main ()
{
    int n;
    printf("Enter a option to proceed : -\n");
    printf("1-> prime number .\n");
    printf("2-> Araange .\n");
    printf("3-> GCD\n");
    scanf("%d",&n);
    int x;
    printf("Enter number of element in array :-\n");
    scanf("%d",&x);
    int arr[x];
    printf("Enter number in the array :-\n");
    for (int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    switch (n)
    {
        case 1:
        for (int i=2;i<x-1;i++)
        {
            if (arr[i]%i==0)
            {
                count++;
                break;
            }
            if (count >0)
           {
            printf("The given Number is not prime :-%d",arr[i]);
           }
            else 
           {
            printf("The given Number is  prime :-%d  ",arr[i]);
            }
        }
        
        break;
        case 2:
        for (int i=0;i<n-1;i++)
        {
            for (int j=0;j<n-1;j++)
            {
                if (arr[j]>arr[j+1])
                {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            for (int i=0;i<n;i++)
            {
            printf("%d ",arr[i]);
            }
        }
            break;
            case 3:
            GCD(x,arr);
            default:
             break;
    }
    
    return 0;
}