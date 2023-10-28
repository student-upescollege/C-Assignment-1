// to convert person name into abbreviated form
#include <stdio.h>
int main() {
    char fname[20],sname[20],lname[20];
    printf("enter the first name,second name and last name \n");
    scanf("%s%s%s", fname,sname,lname);
    printf("abbreviated name:%c.%c.%s\n",fname[0],sname[0],lname);
    return 0;
}