#include<stdio.h>
#include<string.h>
int main ()
{
    char arr[500];
    puts("Enter the array");
    fgets(arr,sizeof(arr),stdin); // enter array 
    int i=0;
    int j=strlen(arr)-1; // last element -1 
    while (i<j) // for revesring 
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    puts(arr); // for getting a new array which is reverse of previous araay
    return 0;
}