#include<stdio.h>
#include<string.h>
char *lastchar (char str [])
{
    char  *x=NULL;
    for (int i=0;i<strlen(str);i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
    (str[i] >= 'a' && str[i] <= 'z'))

    {
             x = &str[i];
    }
}
    return x;
}
int main ()
{
    char str[200];
    printf("Enter the value of array : -");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    char *y=lastchar(str);
    if (y!=NULL)
    {
    printf("%c",*y);
    }
    else 
    {
        printf("No Alphabetic Character found ");
    }
    return 0;
}