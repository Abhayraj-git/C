#include<stdio.h>
#include<string.h>
int main ()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[10] ;

    arr[0].attack=100;
    arr[0].hp=80;
    arr[0].speed=120;
    arr[0].tier='A';
    strcpy(arr[0].name,"charizard");

    arr[1].attack=130;
    arr[1].hp=100;
    arr[1].speed=90;
    arr[1].tier='S';
    strcpy(arr[1].name,"mewto");


    arr[2].attack=120;
    arr[2].hp=125;
    arr[2].speed=75;
    arr[2].tier='A';
    strcpy(arr[2].name,"Pikachu");


    for (int i=0;i<3;i++)
    {
        printf("%s \n",arr[i].name);
        printf("%d \n",arr[i].attack);
        printf("%d \n",arr[i].hp);
        printf("%d \n",arr[i].speed);
        printf("%c \n",arr[i].tier);
        
    }
    return 0;
}