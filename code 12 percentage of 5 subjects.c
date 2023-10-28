// percentage of 5 subjects
#include<stdio.h>
int main()
    {
        float  a,b,c,d,e,sum=0;
        printf("enter marks of first sub:");
        scanf("%f",&a);
        printf("enter marks of second sub:");
        scanf("%f",&b);
        printf("enter marks of third sub:");
        scanf("%f",&c); 
        printf("enter marks of fourth sub:");
        scanf("%f",&d);
        printf("enter marks of fifth sub:");
        scanf("%f",&e);
        sum=a+b+c+d+e;
        printf("percentage of all subjects:%f",sum/500*100);
        return 0;
    }