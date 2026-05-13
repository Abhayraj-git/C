#include<stdio.h>
#include<stdlib.h>
int main ()
{
     printf("Enter the salary of all 10 employes repectively : -\n");
    int *ptr = (int*)calloc(10,sizeof(int));
    for (int i=0;i<10;i++)
    {
       
        scanf("%d",&ptr[i]);
    }
     printf("Enter the salary of new 5 more employes  employes repectively : -\n");
    ptr = realloc(ptr,15*sizeof(int));
    for (int i=10;i<15;i++)
    {
       
        scanf("%d",&ptr[i]);
    }
    int MAX=0;
    int MIN;
    for (int i=0;i<15;i++)
    {
      if (MAX<ptr[i])
      {
        MAX = ptr[i];
      }
    }
    MIN=MAX;
    for (int i=0;i<15;i++)
    {
        if (MIN > ptr[i])
      {
        MIN=ptr[i];
      }
    }
    printf("The highest salary is  : %d  \n",MAX);
    printf("The lowest salary is  : %d  \n",MIN);
    return 0;
}