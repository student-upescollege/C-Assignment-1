// to check leap year
#include<stdio.h>
int main()
    {
        int y;
        printf("enter a year:");
        scanf("%d",&y);
        if(y%400==0 ||y%4==0 && y%100!=0)
        {
        printf("year is leap year");
        }
        else
        {printf("year is not leap year");}
        
        return 0;
    }