#include <stdio.h>

int main()
{
    float salary, bonus, finalSalary;
    char gender;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    if(gender=='M' || gender=='m')
        bonus = salary * 0.05;
    else if(gender=='F' || gender=='f')
        bonus = salary * 0.10;
    else
    {
        printf("Invalid gender!");
        return 0;
    }

    finalSalary = salary + bonus;

    printf("Final Salary = %.2f", finalSalary);

    return 0;
}
