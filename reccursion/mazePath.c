 #include<stdio.h>
 int maze (int cr, int cc,int er, int ec)
 {
    int rightways=0;
    int downways=0;
    if (cr==er || cc==ec)
    {
        return 1;
    }
    if (cr==er)
    {
        rightways+=maze(cr,cc+1,er,ec);
    }
    if (cc==ec)
    {
        downways+=maze(cr+1,cc,er,ec);
    }
    if (cr<er && cc<ec)
    {
         rightways+=maze(cr,cc+1,er,ec);
         downways+=maze(cr+1,cc,er,ec);
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
    int z = maze(1,1,r,c);
    printf("%d",z);
    return 0;
 }