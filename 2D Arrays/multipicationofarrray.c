#include<stdio.h>
int main ()
{
    int r;
printf("Enter the row first array : ");
scanf("%d",&r);
int c;
printf("Enter the column of first array : ");
scanf("%d",&c);
int a1[r][c];

// input of first matrx 
for (int i=0;i<r;i++)
{
    for (int j=0;j<c;j++)
    {
        printf("Enter the element (%d,%d) : ",i,j);
        scanf("%d",&a1[i][j]);
    }
}
 int x;
printf("Enter the row of 2nd array : ");
scanf("%d",&x);
int y;
printf("Enter the column of 2nd array : ");
scanf("%d",&y);
int a2[x][y];
// input of second matrix 
for (int i=0;i<x;i++)
{
    for (int j=0;j<y;j++)
    {
        printf("Enter the element (%d,%d) : ",i,j);
        scanf("%d",&a2[i][j]);
    }
}
if (c!=x) // a1 column must equal to row of a2
{
    printf("Matrix multiplication is not possible ! (column of a is not equal to row of b)\n");
}

int resultant[r][y];
int cx=c;
// for resultant matrix 
for (int i=0;i<r;i++)
{
    for (int j=0;j<y;j++)
    {
        resultant[i][j]=0;
        for (int k=0;k<cx;k++) // cr should equal to column of first array or row of second array 
        {
            resultant[i][j]+=a1[i][k]*a2[k][j]; // i row of first is constant and j column of second array is constant 
        }
      
    }
    
}
// for printing final resultant matrix 
  printf("The resultant matrix is \n");
for (int i=0;i<r;i++)
{
    for (int j=0;j<y;j++)
    {
        printf("%d ", resultant[i][j]);
    }
            printf("\n");

}
    return 0;
}