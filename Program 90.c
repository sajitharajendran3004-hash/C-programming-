#include <stdio.h>

int main() {
    float temp;
    char unit;

    scanf("%f %c",&temp,&unit);

    if(unit=='C')
        printf("F: %.2f",(temp*9/5)+32);
    else if(unit=='F')
        printf("C: %.2f",(temp-32)*5/9);
    else
        printf("Invalid");

    return 0;
}
