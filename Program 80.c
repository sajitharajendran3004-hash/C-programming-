#include <stdio.h>

int main() {
    char size;
    scanf(" %c",&size);

    if(size=='S')
        printf("Small");
    else if(size=='M')
        printf("Medium");
    else if(size=='L')
        printf("Large");
    else if(size=='X')
        printf("Extra Large");
    else
        printf("Invalid Size");

    return 0;
}
