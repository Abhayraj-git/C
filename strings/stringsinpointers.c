// #include<stdio.h>
// #include<string.h>
// int main ()
// {
// char arr[]= "Abhay raj gupta ";
// char*ptr=&arr[2];
// printf("%p\n",&ptr[2]);
// printf("%p\n",ptr);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[]="Abhay raj";
    char* s2=s1;
    s1[0]='M';
    printf("%s",s2);
    return 0;
}