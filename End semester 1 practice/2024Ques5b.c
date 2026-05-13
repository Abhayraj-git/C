#include<stdio.h>
#include<string.h>
int main (int argc, char *argv[])
{
    if (argc<3)
    {
        printf("Error No two string ");
        return 0;
    }
    char str1[100];
    char str2[100];
    strcpy(str1,argv[1]);
    strcpy(str2,argv[2]);
    strcat(str1,str2);
    for (int i=strlen(str1)-1;i>=0;i--)
    {
        printf("%c", str1[i]);
    }
    return 0;
}