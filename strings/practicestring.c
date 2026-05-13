#include<stdio.h>
int main ()
    {
        int n;
        printf("Enter the value of n :");
        scanf("%d",&n);
        char a[n];
        for (int i=0;i<n;i++)
        {
         scanf("%s",&a[i]);
        }
        for (int i=0;i<n;i++)
        {
            printf("%c",a[i]);
        }
        return 0;
    }
// #include<stdio.h>
// int main ()
// {
//     char a[]={"Hello World"};
//     for (int i=0;i<11;i++)
//     {
//         printf("%c",a[i]);
//     }
//     return 0;
// }