#include<stdio.h>
#include<string.h>
int main ()
{
 typedef struct pokemon
 {
int speed;
int hp;
int attack;
char tier;
char name[15] ;
 }pokemon;
 typedef struct legendrypokemon 
 {
pokemon normal;
char ability[15];
 }legendrypokemon ;
 legendrypokemon mewto;
 strcpy(mewto.ability,"pressure");
 mewto.normal.attack=100;
 mewto.normal.hp=130;
 mewto.normal.tier='S';
 mewto.normal.speed=120;

    return 0;
}