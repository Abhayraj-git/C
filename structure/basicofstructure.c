#include<stdio.h>
int main ()
{
    struct job
    {
       int salary;
       int level;
       char tier;
       float grade;
    };
    struct job Abhay;
    Abhay.salary=800000;
    Abhay.level=2;
    Abhay.tier='A';
    Abhay.grade=1.2;

    struct job Raj;
    printf("Enter the salary : ");
    scanf("%d",&Raj.salary);
    // Raj.salary=800000;
    Raj.level=2;
    Raj.tier='A';
    Raj.grade=1.2;    
 printf("%d",Raj.salary);
    return 0;
}