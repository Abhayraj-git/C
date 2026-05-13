#include<stdio.h>
typedef struct TimeStruct
    {
        int hour ;
        int minute ;
        int second ;
    } TimeStruct;
void funtion ( TimeStruct  t1)
{
    printf("Enter the hour's :-");
    scanf("%d",&t1.hour);
    printf("Enter the minute's :-");
    scanf("%d",&t1.minute);
    printf("Enter the second's :-");
    scanf("%d",&t1.second);
    if (t1.hour>24 || t1.hour<0 || t1.minute>59 || t1.minute<0 || t1.second>59 || t1.second<0)
    {
        printf("Error");
        return ;
    }
    if (t1.hour>=13)
    {
        t1.hour=t1.hour-12;
        printf("%d : %d : %d PM",t1.hour,t1.minute,t1.second);
    }
    else
    {
        printf("%d : %d : %d AM",t1.hour,t1.minute,t1.second);
    }
}
int main ()
{ 
    TimeStruct t1;
    funtion (t1);
    return 0;
}