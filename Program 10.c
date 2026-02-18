#include <stdio.h>

int main()
{
    int month, year;
    int days;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("Month: January\n");
            days = 31;
            break;

        case 2:
            printf("Month: February\n");

            printf("Enter year: ");
            scanf("%d", &year);

            // Leap year condition
            if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            {
                printf("Leap Year\n");
                days = 29;
            }
            else
            {
                printf("Not a Leap Year\n");
                days = 28;
            }
            break;

        case 3:
            printf("Month: March\n");
            days = 31;
            break;

        case 4:
            printf("Month: April\n");
            days = 30;
            break;

        case 5:
            printf("Month: May\n");
            days = 31;
            break;

        case 6:
            printf("Month: June\n");
            days = 30;
            break;

        case 7:
            printf("Month: July\n");
            days = 31;
            break;

        case 8:
            printf("Month: August\n");
            days = 31;
            break;

        case 9:
            printf("Month: September\n");
            days = 30;
            break;

        case 10:
            printf("Month: October\n");
            days = 31;
            break;

        case 11:
            printf("Month: November\n");
            days = 30;
            break;

        case 12:
            printf("Month: December\n");
            days = 31;
            break;

        default:
            printf("Invalid month number!");
            return 0;
    }

    printf("Number of days = %d\n", days);

    return 0;
}
