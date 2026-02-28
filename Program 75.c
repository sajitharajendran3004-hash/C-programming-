#include <stdio.h>

int main() {
    int charge;
    scanf("%d",&charge);

    if(charge<0 || charge>100)
        printf("Invalid");
    else if(charge<=25)
        printf("Low");
    else if(charge<=50)
        printf("Medium");
    else if(charge<=75)
        printf("Almost Full");
    else
        printf("Full");

    return 0;
}
