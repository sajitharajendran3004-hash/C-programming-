#include <stdio.h>

int main()
{
    int steps, time;

    printf("Enter number of steps walked: ");
    scanf("%d", &steps);

    printf("Enter time taken (in minutes): ");
    scanf("%d", &time);

    if(steps >= 10000 && time <= 90)
        printf("Fitness Level: Excellent");

    else if(steps >= 7000 && time <= 120)
        printf("Fitness Level: Good");

    else if(steps >= 4000)
        printf("Fitness Level: Average");

    else
        printf("Fitness Level: Poor");

    return 0;
}
