#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number (1-7): ");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Monday\n");
            printf("Weekday");
            break;

        case 2:
            printf("Tuesday\n");
            printf("Weekday");
            break;

        case 3:
            printf("Wednesday\n");
            printf("Weekday");
            break;

        case 4:
            printf("Thursday\n");
            printf("Weekday");
            break;

        case 5:
            printf("Friday\n");
            printf("Weekday");
            break;

        case 6:
            printf("Saturday\n");
            printf("Holiday (Weekend)");
            break;

        case 7:
            printf("Sunday\n");
            printf("Holiday (Weekend)");
            break;

        default:
            printf("Invalid input! Please enter number between 1 and 7.");
    }

    return 0;
}
