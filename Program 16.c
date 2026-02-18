#include <stdio.h>

int main()
{
    int choice;

    printf("CHOCOLATE MENU\n");
    printf("1. Milk Chocolate\n");
    printf("2. Dark Chocolate\n");
    printf("3. White Chocolate\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("You selected Milk Chocolate - Creamy taste! Enjoy!");
            break;

        case 2:
            printf("You selected Dark Chocolate - Rich flavour! Enjoy!");
            break;

        case 3:
            printf("You selected White Chocolate - Sweet and smooth! Enjoy!");
            break;

        default:
            printf("Invalid choice! Please select 1 to 3.");
    }

    return 0;
}
