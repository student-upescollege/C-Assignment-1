//check given number is positive or negative
#include<stdio.h>
int main()
{
    int n;
    printf("enter first number\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("number is positive");
    }
    if(n<0)
    {
        printf("number is negative");
    }
    if(n==0)
    {
        printf("number is zero");
    }
    return 0;
}
