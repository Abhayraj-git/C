#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n+1-i;j++)
        {
            printf(" ");
        }
        char ch ='A';
        for (int k=1;k<=i;k++)
        {
            printf("%c",ch);
            ch=ch+1;
        }
        ch=ch-2;
        for (int l=1;l<=i-1;l++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}