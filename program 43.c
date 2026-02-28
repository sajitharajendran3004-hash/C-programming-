#include <stdio.h>

int main() {
    float temp, oil;
    int rpm;

    printf("Enter Temperature (C): ");
    scanf("%f", &temp);
    printf("Enter Oil Pressure (PSI): ");
    scanf("%f", &oil);
    printf("Enter RPM: ");
    scanf("%d", &rpm);

    if (temp > 75 || oil < 12 || rpm > 7000)
        printf("Engine Health: Poor");
    else if (temp > 50 || oil < 12 || rpm > 4000)
        printf("Engine Health: Fair");
    else
        printf("Engine Health: Good");

    return 0;
}
