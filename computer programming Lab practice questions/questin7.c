// Write a program in C to print or display the lower triangular of a given matrix.
 #include<stdio.h>
 int main ()
 {
    int r,c;
    printf("Enter the value of rows : ");
    scanf("%d",&r);
    printf("Enter the value of column : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the value of array : \n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (i>=j)
            {
                printf("%d",arr[i][j]);
            }
            else 
            {
                printf(" ");
            }
        }
         printf("\n");
    }
    return 0;
 }