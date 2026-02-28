#include <stdio.h>

int main(){
    char size,fuel;
    int purpose;

    scanf(" %c %c %d",&size,&fuel,&purpose);

    if((size=='S'||size=='M'||size=='L') &&
       (fuel=='G'||fuel=='D'||fuel=='E') &&
       (purpose==1||purpose==2||purpose==3))
        printf("Valid Input");
    else
        printf("Invalid Input");

    return 0;
}
