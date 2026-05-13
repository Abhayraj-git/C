
   #include<stdio.h>
   int main ()
   {
    int n,x,total=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Elemnt no %d is : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for (int k=i+2;k<n;k++)
            {
            if (arr[i]+arr[j]+arr[k]==x)
            {
                total++;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            }
            }
        }
    }
    
    printf("%d \n",total);
    return 0;
   }