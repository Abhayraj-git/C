#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name [30];
}pokemon;
void change (pokemon *p)
{
     (*p).hp=70;
     (*p).attack=800;
     (*p).speed=120;
     (*p).tier='S';
     strcpy((*p).name,"mewto");
     printf("%d\n",(*p).hp);
     printf("%d\n",(*p).attack);
     printf("%d\n",(*p).speed);
     printf("%c\n",(*p).tier);
     printf("%s\n",(*p).name);
     return ;
}
int main ()
{
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"charizard");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    change (&pikachu);
    return 0;
}