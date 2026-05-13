#include<stdio.h>
int main ()
{
    int r;
    printf("Enter the number of rows :-");
    scanf("%d",&r);
    int c;
    printf("Enter the number of column :-");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the value in array :-\n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int x;
    int val;
     for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            
           val = arr[i][j];


           if (j+3<c && val==arr[i][j+1] && val==arr[i][j+2] && val==arr[i][j+3])
        {
             printf("True\n");
             return 0;
        }

        if (i+3<r && val==arr[i+1][j] && val==arr[i+2][j] && val==arr[i+3][j])
        {
            printf("True\n");
             return 0;
        }
        if (i+3<r && j+3<c && val==arr[i+1][j+1] && val==arr[i+2][j+2] && val==arr[i+3][j+3])
        {
            printf("True\n");
            return 0;
        }
        if (i+3<r && j-3>c && val==arr[i+1][j-1] && val==arr[i+2][j-2] && val==arr[i+3][j-3])
        {
            printf("True\n");
            return 0;
        }
        }
    }

    return 0;
}