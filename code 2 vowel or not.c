//find the character is vowel or not
#include<stdio.h>
int main()
{
    char n;
    printf("enter an alphabet\n");
    scanf("%c",&n);
    if ( n=='a'|| n=='e'|| n=='i'|| n=='o'|| n=='u')
    {
        printf("char is vowel\n");
    }
    else
    {
        printf("char is not vowel\n");
    }
    
    return 0;
}

