#include<stdio.h>
int main ()
{
    char arr[100];
    FILE*ptr=(fopen("Raj.txt","w"));
    for (int i=0;i<15;i++)
    {
        scanf(" %c",&arr[i]);
        // getchar();
        fputc(arr[i],ptr);
    } 
    fclose(ptr);
}