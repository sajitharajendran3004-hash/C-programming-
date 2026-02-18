#include <stdio.h>

int main()
{
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if(temp <= 0)
        printf("Freezing weather");
    else if(temp <= 10)
        printf("Very Cold weather");
    else if(temp <= 20)
        printf("Cold weather");
    else if(temp <= 30)
        printf("Normal temperature");
    else if(temp <= 40)
        printf("Hot");
    else
        printf("Very Hot");

    return 0;
}
