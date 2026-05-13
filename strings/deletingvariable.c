#include<stdio.h>
#include<string.h>
int main ()
{
    char x;
    char arr[10000];
    printf("Enter the value of string :");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    printf("Enter the value of variable which we want to remove : ");
    scanf("%c",&x);
    int j=0;
    for (int i=0;i<strlen(arr);i++)
    {
        if (!(arr[i]==x || arr[i]==(x-32) || arr[i]==(x+32)))
        {
            arr[j++]=arr[i];
        }
    }
     arr[j]='\0';
    printf("%s",arr);
    return 0;
}