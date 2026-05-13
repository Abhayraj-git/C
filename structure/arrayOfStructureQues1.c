#include<stdio.h>
#include<string.h>
int main ()
    {
        typedef struct cricketer
        {
            char name [30];
            int age ;
            int matches;
            float avg;
        } cricketer;

        cricketer arr[20];
        for (int i=0;i<5;i++)
        {
            printf("Enter name : ");
            fgets(arr[i].name,sizeof(arr[i].name),stdin);
            // arr[i].name[strcspn(arr[i].name,"\n")]='\0';
            getchar();
             printf("Enter age : ");
            scanf("%d",&arr[i].age);
            getchar();
             printf("Enter matches : ");
            scanf("%d",&arr[i].matches);
            getchar();
             printf("Enter avg : ");
            scanf("%f",&arr[i].avg);
            getchar();
            printf("\n");
        }


        for (int i=0;i<5;i++)
        {
            printf("%s  ",arr[i].name);
            printf("%d  ",arr[i].age);
            printf("%d  ",arr[i].matches);
            printf("%f  \n",arr[i].avg);
        }
        return 0;
    }