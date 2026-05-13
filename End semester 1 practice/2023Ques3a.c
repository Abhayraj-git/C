#include<stdio.h>
#include<string.h>
typedef struct candidate
{
    char name[100];
    int id ;
    int score;
}candidate;
void funtion (candidate arr[5])
{
    for(int i=0;i<5;i++)
    {
    printf("Enter the Name :-");
    scanf("%s",arr[i].name);
    getchar();
    printf("\n");
    printf("Enter the Id of Cndidate :-");
    scanf("%d",&arr[i].id);
    printf("\n");
    printf("Enter The score of Student :-");
    scanf("%d",&arr[i].score);
    printf("\n");
    }
     for (int i=0;i<5;i++)
     {
        if (arr[i].score>=9 && arr[i].score<=10)
        {
            printf("Rank -> Red.\n");
            printf("Name -> %s\n",arr[i].name);
            printf("Id -> %d\n",arr[i].id);
            printf("Marks ->%d\n",arr[i].score);
            printf("\n");
        }
        if (arr[i].score>=7 && arr[i].score<=8)
        {
            printf("Rank -> Green.\n");
            printf("Name -> %s\n",arr[i].name);
            printf("Id -> %d\n",arr[i].id);
            printf("Marks ->%d\n",arr[i].score);
            printf("\n");
        }
        if (arr[i].score>=5 && arr[i].score<=6)
        {
            printf("Rank -> Blue.\n");
            printf("Name -> %s\n",arr[i].name);
            printf("Id -> %d\n",arr[i].id);
            printf("Marks ->%d\n",arr[i].score);
            printf("\n");
        }
        if (arr[i].score>=3 && arr[i].score<=4)
        {
            printf("Rank -> Yellow.\n");
            printf("Name -> %s\n",arr[i].name);
            printf("Id -> %d\n",arr[i].id);
            printf("Marks ->%d\n",arr[i].score);
            printf("\n");
        }
        if (arr[i].score>=1 && arr[i].score<=2)
        {
            printf("Rank -> Orange.\n");
            printf("Name -> %s\n",arr[i].name);
            printf("Id -> %d\n",arr[i].id);
            printf("Marks ->%d\n",arr[i].score);
            printf("\n");
        }
        if (arr[i].score==0)
        {
            printf("Rank -> Black.\n");
            printf("Name -> %s\n",arr[i].name);
            printf("Id -> %d\n",arr[i].id);
            printf("Marks ->%d\n",arr[i].score);
            printf("\n");
        }
     }
   
}
int main ()
{
 candidate arr[5];
 funtion(arr);
    return 0;
}