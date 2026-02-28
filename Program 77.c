#include <stdio.h>

int main() {
    int age;
    scanf("%d",&age);

    if(age<13)
        printf("Child - Not Eligible");
    else if(age<18)
        printf("Teenager - Not Eligible");
    else if(age<60)
        printf("Adult - Eligible");
    else
        printf("Senior - Eligible");

    return 0;
}
