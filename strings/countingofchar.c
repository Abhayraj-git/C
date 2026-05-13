
#include<stdio.h>
#include<string.h>
int main ()
{
    int count=0;
    char l;
    char arr[1000];
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    printf("Enter a character to count : ");
    scanf("%c",&l);
    for (int i=0;i<strlen(arr);i++)
    {
        if (arr[i]==l|| arr[i]==(l-32) || arr[i]==(l+32))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}