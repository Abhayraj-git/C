#include<stdio.h>
int main ()
{
    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int c;
    printf("Enter the value of c : ");
    scanf("%d",&c);
    int a1[r][c];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("Element no (%d,%d) : ",i,j);
            scanf("%d",&a1[i][j]);
        }
 }
 int minr=0;
 int maxr=r-1;
 int minc=0;
 int maxc=c-1;
 int totalcount=(r*c);
 int count=0;

 while(count<totalcount)
 {
    for (int j=minc;j<=maxc && count<totalcount;j++)
    {
        printf("%d ",a1[minr][j]);
        count++;
    }
    minr++;
    for (int i=minr;i<=maxr && count<totalcount;i++)
    {
        printf("%d ",a1[i][maxc]);
        count++;
    }
    maxc--;
    for (int j=maxc;j>=minc && count<totalcount;j--)
    {
        printf("%d ",a1[maxr][j]);
        count++;
    }
      maxr--;
      for (int i=maxr;i>=minr && count<totalcount;i--)
      {
        printf("%d ",a1[i][minc]);
        count++;
      }
      minc++;
 }
 return 0;   
}