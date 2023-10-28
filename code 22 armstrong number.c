//armstrong number
#include <stdio.h>

int main()
{
    int n,r,sum=0,n1;
    printf("input any number:");
    scanf("%d",&n);
   for (n1=n; n!=0; n=n/10)
   {
       r=n%10;
       sum=sum+(r*r*r);
   }
    if (sum==n1)
        printf("%d is an armstrong number.\n",n1);
    else
      printf("%d is  not an armstrong number.\n",n1);
    
    return 0;
}
