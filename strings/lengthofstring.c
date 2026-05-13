#include<stdio.h>
#include<string.h>
int main ()
{
    char arr[100];
    printf("Enter the value of array : ");
    fgets(arr,sizeof(arr),stdin);
    // arr[strcspn(arr,"\n")]='\0';abhay 
    int x = strlen(arr);
    printf("%d",x);
    return 0;
}
