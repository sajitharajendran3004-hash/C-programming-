#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days: 31\n");
            break;

        case 4: case 6: case 9: case 11:
            printf("Number of days: 30\n");
            break;

        case 2:
            printf("Number of days: 28 or 29 (Leap year)\n");
            break;

        default:
            printf("Invalid month!");
            return 0;
    }

    // Quadrant checking
    if(month >= 1 && month <= 3)
        printf("Quadrant: Q1 (First Quarter)");
    else if(month >= 4 && month <= 6)
        printf("Quadrant: Q2 (Second Quarter)");
    else if(month >= 7 && month <= 9)
        printf("Quadrant: Q3 (Third Quarter)");
    else
        printf("Quadrant: Q4 (Fourth Quarter)");

    return 0;
}
