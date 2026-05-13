#include<stdio.h>
int main ()
{
    typedef struct pokemon 
{
    int hp;
    int attack;
    int speed;
    char tier[30];
    char name[30];
}pokemon;
pokemon pikkachu;
pokemon*x=&pikkachu;
printf("%p\n",&pikkachu.hp);
printf("%p\n",&pikkachu.attack);
printf("%p\n",&pikkachu.speed);
printf("%p\n",&pikkachu.tier);
printf("%p\n",&pikkachu.name);
printf("%p",x);
 return 0;
}