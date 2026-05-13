#include<stdio.h>
#include<string.h>
typedef struct student
{
    int Rollno;
    char name [30];
    char department [30];
    char course [30];
    int YearOfjoining;
}student;

void check (student s1,student s2)
{
    if (strcmp(s1.department,s2.department)==0)
    {
        printf("They have same Department ");
    }
    else 
    {
         printf("They does not have same Department ");
    }
    return ;
}
int main ()
{
    student s1,s2;
    s1.Rollno=295;
    strcpy(s1.name,"Abhay");
    strcpy(s1.department,"ComputerScience");
    strcpy(s1.course,"B.tech");
    s1.YearOfjoining=2025;

    s2.Rollno=291;
    strcpy(s2.name,"Venkat");
    strcpy(s2.department,"ComputerScience");
    strcpy(s2.course,"B.tech");
    s2.YearOfjoining=2025;

    check(s1,s2);
    return 0;
}