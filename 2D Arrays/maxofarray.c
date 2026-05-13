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
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("Element no (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     int max=a[0][0];
     int row=0,column=0;
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
             if (a[i][j]>max)
             {
                max=a[i][j];
                row=i;
                column=j;

             }
             
            }
        }
        printf(" The maximum value of array is : %d \n",max);4
        
        printf("place of maximum element is (%d,%d) ",row,column);
    return 0;
}