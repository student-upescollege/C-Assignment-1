//to check the character is uppercase,lowercase,digit,special character
#include<stdio.h>
int main()
{
    char c;
    printf("enter a character\n");
    scanf("%c",&c);
    if ( c>='A'&&c<='Z')
    {
        printf("upper case letter\n");
    }
  else if (c>='a'&&c<='z')
    {
        printf("lower case letter\n");
    }
   else if(c>='0'&&c<='9')
    {
        printf("digit\n");
    }
    else
    {
        printf(" special character");
    }
    return 0;
}

