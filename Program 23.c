#include <stdio.h>
int main()
{
    float temp;
    printf("Enter body temperature (°C): ");
    scanf("%f",&temp);

    if(temp >= 37)
        printf("Fever detected");
    else
        printf("No fever");

    return 0;
}
