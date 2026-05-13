#include<stdio.h>
typedef struct pokemon
{
    int speed;
    int hp;
    int attack;
}pokemon;
void fun (pokemon pikachu)
{
   pikachu.attack=300;
   pikachu.hp=400;
   pikachu.speed=50;
   return ;

}
int main ()
{
    pokemon pikachu;
    pikachu.attack=200;
    pikachu.hp=100;
    pikachu.speed=120;

    fun (pikachu);
     printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.hp);
            printf("%d\n",pikachu.speed);
    return 0;
}
