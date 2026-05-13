#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        char ch ='A';
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
            printf("%d",j);
            }
            else 
            {
                printf("%c",ch);
                ch = ch+1;
            }
        }
        printf("\n");
    }
    return 0;
}