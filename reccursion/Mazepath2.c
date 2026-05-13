#include<stdio.h>
int maze2(int x,int y)
{
    int rightways=0;
    int downways=0;
    if (x==1 && y==1)
    {
        return 1;
    }
    if (x==1)
    {
        rightways+=maze2(x,y-1);
    }
    if (y==1)
    {
        downways+=maze2(x-1,y);
    }
    if (x>1 && y>1)
    {
        rightways+=maze2(x,y-1);
        downways+=maze2(x-1,y);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main ()
{
    int r;
    printf("Enter the value of rows : ");
    scanf("%d",&r);
     int c;
    printf("Enter the value of column : ");
    scanf("%d",&c);
    int z = maze2(r,c);
    printf("%d",z);
    return 0;
}