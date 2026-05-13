#include<stdio.h>
#include<string.h>
int main ()
{
    struct x
    {
        char name[50] ;
        int salary ;
        int age ;
    };

    struct x person1 ;
    strcpy (person1.name,"Abhay");
    person1.salary = 800000;
    printf("Enter the age of person 1 : ");
    scanf("%d",&person1.age);

    struct x person2 ;
    strcpy (person2.name,"Raj");
    person2.salary = 800000;
    printf("Enter the age of peson 2 : ");
    scanf("%d",&person2.age);
    

    printf("%s \n",person1.name);
    printf("%d \n",person2.age);
    return 0;
}