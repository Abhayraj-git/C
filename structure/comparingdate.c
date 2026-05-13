#include<stdio.h>
int main ()
{
    typedef struct date
    {
        int date ;
        int months;
        int year;
    }date;
    date st;
    st.date=22;
    st.months=3;
    st.year=2024;

    date sc;
    sc.date=22;
    sc.months=3;
    sc.year=2024;

    if (st.date==sc.date && st.months==sc.months  && st.year==sc.year)
    {
        printf("Equal");
    }
    else 
    {
        printf("UnEqual");
    }
    return 0;
}