// to find whether eligible for voting or not
#include<stdio.h>
int main()
{
    int n;
    printf("enter your age \n");
    scanf("%d",&n);
    if ( n>=18)
    {
        printf("%d you can vote\n",n);
    }
  else
    {
        printf("%d you are not eligible for voting\n",n);
    }
    return 0;
}
