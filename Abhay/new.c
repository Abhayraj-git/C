#include<stdio.h>
int main(int argc, char  *argv[])
{
    for (int i=0;i< argc; i++)
    {
        printf("%d  %s\n",i,argv[i]);
    }
     printf("The value of argc is %d\n",argc);
    return 0;
}