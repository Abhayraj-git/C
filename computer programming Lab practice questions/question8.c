// Write a program in C to calculate the determinant of a 3 x 3 matrix.
#include<stdio.h>
int main ()
{
    int arr[3][3];
    printf("Enter the value of array : \n");
    for ( int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int determinent;
    determinent=arr[0][0]*(arr[1][1] * arr[2][2]-arr[2][1] * arr[1][2])+arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]);
    printf("The sum of determinent[3][3] is %d",determinent);
    return 0;
}