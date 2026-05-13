
#include<stdio.h>
void intializeImage (int r,int c,int arr[r][c])
{
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    return ;
}
void printImage (int r,int c,int arr[r][c])
{
   for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void biggestpixel (int r,int c,int arr[r][c])
{
    int  bright_pixel=0;
    int Max_row;
    int Max_column;
     for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
           if (bright_pixel<arr[i][j])
           {
            bright_pixel=arr[i][j];
            Max_row=i;
            Max_column=j;
           }
        }
    }
    printf("The brightest pixel is %d and it's postion is (%d,%d)",bright_pixel,Max_row,Max_column);
    return ;
}
int main ()
{
    int r,c;
    printf("Enter the value of rows : ");
    scanf("%d",&r);
    printf("Enter the value of column : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter trhe value of array - \n");
    intializeImage(r,c,arr);
    printf("Printing the 2D array - \n");
    printImage(r,c,arr);
    printf("finding the brighest pixel :-\n");
    biggestpixel(r,c,arr);
    return 0;
}