#include<stdio.h>
typedef struct day 
{
    int date;
    int months;
    int year;
}day;
int Diffrence ( day d1,day d2)
{
    int Diffrence=0;
    long x = d1.year*365;
    long y =d2.year*365;
    int diff_monthsd1=0;
    int diff_monthsd2=0;
    int sumd1=0;
    int sumd2=0;
    int daysofMonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0;i<d1.months;i++)
    {
        diff_monthsd1+=daysofMonths[i];
    }
    for (int i=0;i<d2.months;i++)
    {
        diff_monthsd2+=daysofMonths[i];
    }
    sumd1=x+diff_monthsd1+d1.date;
    sumd2=y+diff_monthsd2+d2.date;
    if (sumd1>sumd2)
    {
        Diffrence=sumd1-sumd2;
    }
    else
    {
        Diffrence=sumd2-sumd1;
    }
    return Diffrence;
}
int main ()
{
    day d1;
    day d2;
    printf("Enter the Date of d1 : ");
    scanf("%d",&d1.date);
    printf("Enter the Month of d1 : ");
    scanf("%d",&d1.months);
    printf("Enter the year of d1 : ");
    scanf("%d",&d1.year);
    printf("Enter the Date of d2 : ");
    scanf("%d",&d2.date);
    printf("Enter the Month of d2 : ");
    scanf("%d",&d2.months);
    printf("Enter the year of d2 : ");
    scanf("%d",&d2.year);
    int z=Diffrence(d1,d2);
    printf("%d",z);
    return 0;
}