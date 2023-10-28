// to check number is even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    if ( n%2 ==0)
    {
        printf("%d even\n",n);
    }
  else
    {
        printf("%d odd\n",n);
    }
    return 0;
}
