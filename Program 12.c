#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");

    // check non-numeric input
    if(scanf("%d", &age) != 1)
    {
        printf("Invalid input! Please enter a numeric value.");
        return 0;
    }

    // invalid age range
    if(age < 0 || age > 120)
    {
        printf("Invalid age entered!");
    }
    else if(age <= 5)
    {
        printf("Age Group: Child\n");
        printf("Recommended Food: Mashed vegetables or soft fruits");
    }
    else if(age <= 12)
    {
        printf("Age Group: Kid\n");
        printf("Recommended Food: Milk, cereals, fruits and eggs");
    }
    else if(age <= 18)
    {
        printf("Age Group: Teenager\n");
        printf("Recommended Food: Burgers or pasta");
    }
    else if(age <= 30)
    {
        printf("Age Group: Young Adult\n");
        printf("Recommended Food: Rice, chapati, vegetables and protein foods");
    }
    else if(age <= 50)
    {
        printf("Age Group: Adult\n");
        printf("Recommended Food: Balanced diet with less oil and more fibre");
    }
    else
    {
        printf("Age Group: Senior Citizen\n");
        printf("Recommended Food: Soup or grilled fish");
    }

    return 0;
}
