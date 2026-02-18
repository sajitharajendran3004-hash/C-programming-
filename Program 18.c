#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if(basic <= 70000)
    {
        hra = basic * 0.30;
        da  = basic * 0.80;
    }
    else
    {
        hra = basic * 0.20;
        da  = basic * 0.50;
    }

    gross = basic + hra + da;

    printf("Gross Salary = %.2f", gross);

    return 0;
}
