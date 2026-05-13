#include<stdio.h>
int main ()
{
int r;
printf("Enter the value of r : ");
scanf("%d",&r);
int c;
printf("Enter the value of c : ");
scanf("%d",&c);
int a[r][c];
printf("Enter the value of arrays \n");
for (int i=0;i<r;i++)
{
    for (int j=0;j<c;j++)
    {
        printf("Element no (%d,%d) : ",i,j);
        scanf("%d",&a[i][j]);
    }
}
int sum=0;
for (int i=0;i<r;i++)
{
    for (int j=0;j<c;j++)
    {
     sum=sum+a[i][j];
    }
}
 printf("The addition of array matrix is : ");
 printf("%d",sum);
return 0;
}