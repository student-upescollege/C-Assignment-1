// to read integer and print it's first three power
#include <stdio.h>
int main() {
    float a;
    printf("enter number:");
    scanf("%f",&a);
    printf("first power of number is:%f\n",a);
    printf("second power of number is:%f\n",a*a);
    printf("third power of number is:%f\n",a*a*a);
    return 0;
}