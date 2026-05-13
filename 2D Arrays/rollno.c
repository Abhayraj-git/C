#include<stdio.h>
int main ()
{
    int r,c;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    int arr[r][c];
    for (int i=0;i<r;i++) //roll no.
{
    for (int j=0;j<c;j++) //marks.
    {
        printf("Element no (%d , %d ) : ",i,j);
        scanf("%d",&arr[i][j]); 
    }
}
for (int i = 0; i < r; i++)
    {
        printf("Roll no is %d and his/her marks are : ",arr[i][0]);
    for (int j=1;j<c;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}