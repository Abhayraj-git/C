// #include<stdio.h>
// int main ()
// {
//     int x=12;
//     int sum=0,found=0;
//     int arr[] ={1,2,3,4,5,6,7};
//     int n = sizeof(arr);
//     for (int i=0;i<n;i++)
//     {
//       for (int j=i+1;j<n;j++)
//       {
//         sum=arr[i]+arr[j];
//         if (sum==x)
//         {
//             printf("%d and %d are the two element of array whoase sum is %d\n",i+1,j+1,x);
//             found = 1;
//         }
//       }
      
//     }
//     if (found!=1)
//     {
//         printf("Didint found");
//     }
//     return 0;
// }
#include<stdio.h>
int main ()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=n-1;
    int x=14;
    int found=0;
    while(i<j)
    {
        if (arr[i]+arr[j]==x)
        {
            printf("%d and %d sum's equal to %d .",i+1,j+1,x);
            found=1;
            break;
        }
        else if (arr[i]+arr[j]>x)
        {
            j--;
        }
        else 
        {
            i++;
        }
    }
    if (found==0)
    {
      printf("No such pairs found");
    }
    return 0;
}