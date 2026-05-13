#include<stdio.h>
#include<string.h>
int main ()
{
    struct type
    {
        char name[50];
        int price ;
        int NoOfPages;
    };
    struct type book;
    strcpy(book.name,"LordOfRing");
    book.price = 1000;
    book.NoOfPages = 200;
    

    printf("Book Name: %s\n", book.name);
    printf("Price: %d\n", book.price);
    printf("Pages: %d\n", book.NoOfPages);

return 0;
}