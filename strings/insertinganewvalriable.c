#include<stdio.h>
#include<string.h>
int main ()
{
    char arr[10000];
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    for (int i=strlen(arr);i>=3;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[3]='A';
    printf("%s",arr);
    return 0;
}