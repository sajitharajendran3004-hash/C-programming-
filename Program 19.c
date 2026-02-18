#include <stdio.h>

int main()
{
    int angle;

    printf("Enter angle: ");
    scanf("%d", &angle);

    switch(angle)
    {
        case 0:
        case 360: printf("North"); break;
        case 90: printf("East"); break;
        case 180: printf("South"); break;
        case 270: printf("West"); break;
        default: printf("Invalid direction angle");
    }

    return 0;
}
