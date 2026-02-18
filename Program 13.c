#include <stdio.h>

int main()
{
    int age;
    float price;

    printf("Enter your age: ");

    // Check non-numeric input
    if(scanf("%d", &age) != 1)
    {
        printf("Invalid input! Please enter a number.");
        return 0;
    }

    // Invalid age
    if(age < 0 || age > 120)
    {
        printf("Invalid age entered!");
    }
    else if(age <= 12)
    {
        price = 100;
        printf("Category: Children\nTicket Price = Rs. %.2f", price);
    }
    else if(age <= 19)
    {
        price = 150;
        printf("Category: Teenager\nTicket Price = Rs. %.2f", price);
    }
    else if(age <= 60)
    {
        price = 200;
        printf("Category: Adult\nTicket Price = Rs. %.2f", price);
    }
    else
    {
        price = 120;
        printf("Category: Senior Citizen\nTicket Price = Rs. %.2f", price);
    }

    return 0;
}
