#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");

    // check non-numeric input
    if(scanf("%d", &age) != 1)
    {
        printf("Invalid input! Please enter a number.");
        return 0;
    }

    // check negative age
    if(age < 0 || age > 120)
    {
        printf("Invalid age entered!");
    }
    else if(age <= 5)
    {
        printf("Recommended Food: Mashed vegetables or soft fruits");
    }
    else if(age <= 12)
    {
        printf("Recommended Food: Milk, rice, eggs and healthy snacks");
    }
    else if(age <= 18)
    {
        printf("Recommended Food: Burgers or pasta");
    }
    else if(age <= 30)
    {
        printf("Recommended Food: Chapati, vegetables, fruits and protein foods");
    }
    else if(age <= 50)
    {
        printf("Recommended Food: Balanced diet with less oil and more fibre");
    }
    else
    {
        printf("Recommended Food: Soup or grilled fish");
    }

    return 0;
}
