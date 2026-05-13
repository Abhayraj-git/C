#include<stdio.h>
int main ()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("What you want to calculate :  \n");
    printf(" 1). Addition \n");
    printf(" 2). Subtraction \n");
    printf(" 3). Multiply \n");
    printf(" 4). Divide \n");
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    printf("%d",a+b);
    break;
    case 2:
    printf("%d",a-b);
    break;
    case 3:
    printf("%d",a*b);
    break;
    case 4:
    printf("%f",(float)a/b);
    break;
    default:
    printf("Invalid input");
        break;
    }
    return 0;
}