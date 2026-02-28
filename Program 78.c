#include <stdio.h>

int main() {
    float value;
    char unit;

    scanf("%f %c",&value,&unit);

    if(unit=='k')
        printf("%.2f m",value*1000);
    else if(unit=='m')
        printf("%.2f km",value/1000);
    else
        printf("Invalid Unit");

    return 0;
}
