#include <stdio.h>

int main()
{
    int hours;
    char gender;
    float salary = 0;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter number of hours worked in a week: ");
    scanf("%d", &hours);

    if(hours <= 8)
    {
        if(gender == 'M' || gender == 'm')
            salary = hours * 80;
        else if(gender == 'F' || gender == 'f')
            salary = hours * 60;
        else
        {
            printf("Invalid gender input!");
            return 0;
        }
    }
    else
    {
        if(gender == 'M' || gender == 'm')
            salary = (8 * 80) + ((hours - 8) * 100);
        else if(gender == 'F' || gender == 'f')
            salary = (8 * 60) + ((hours - 8) * 100);
        else
        {
            printf("Invalid gender input!");
            return 0;
        }
    }

    printf("Total Salary = Rs. %.2f", salary);

    return 0;
}
