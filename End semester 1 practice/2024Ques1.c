#include<stdio.h>
int main()
{
    char arr[50];
    int n;
    scanf("%d",&n);
    int i=0;
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i=0;i<n;i++){
if(arr[i]>=65 && arr[i]<=90)
{
    arr[i]+=32;
}
else if(arr[i]>=97 && arr[i]<=122)
{
    arr[i]-=32;
}
    }

    FILE*ptr=fopen("Abhay.txt","w");
    for (int i=0;i<n;i++)
    {
        fputc(arr[i],ptr);
    }
 return 0;
}