// #include<stdio.h>
// int main ()
// {
//     int n,count=0;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++)
//     {
//         printf("Element no %d is : ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int uniquecount=0;
//     for (int i=0;i<n;i++)
//     {
//         count=0;
//         for (int j=i+1;j<n;j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 count++;
//             }
            
//         }
//         if (count==1)
//         {
//             uniquecount++;
//         }
//     }
//     if (uniquecount==0)
//     {
//         printf("Every element is repeated twice; no unique element exists.");
//     }
//     else 
//     {
//          printf("There exists at least one unique element not repeated twice.");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element no %d is: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int uniquecount = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                uniquecount=1;
                
            }
        }
    }

    if (uniquecount==1 )
    {
        printf("unique element exists.\n");
    }
    else
    {
        printf("all have a pair.\n");
    }

    return 0;
}
