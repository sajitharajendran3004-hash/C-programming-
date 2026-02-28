#include <stdio.h>

int main() {
    float weight;
    scanf("%f",&weight);

    if(weight<=5)
        printf("Small Package");
    else if(weight<=20)
        printf("Medium Package");
    else
        printf("Large Package");

    return 0;
}
