#include<stdio.h>
int queue[3];
int rear=-1;
int front=-1;
void Enqueue(int queue[],int n)
{
    if()
}
int main ()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            Enqueue(queue,3);
            break;
        case 2:
            Dequeue(queue,3);
            break;
        case 3:
            Display(queue,3);
            break;
        case 4:
            return 0;
        default:
        printf("Invalid input");
            break;
        }
    }
    return 0;
}