// temperature scale
#include<stdio.h>
int main()
    {
        float  a,b;
        printf("enter temerature in degree:");
        scanf("%f",&a);
        b=1.8*a+32;
        printf("temperature in fahrenheit:%f",b);
        
        return 0;
    }