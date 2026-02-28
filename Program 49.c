#include <stdio.h>

int main() {
    float age;
    printf("Enter Lion Age: ");
    scanf("%f", &age);

    if (age < 2)
        printf("Cub");
    else if (age < 4)
        printf("Juvenile");
    else if (age < 7)
        printf("Subadult");
    else if (age < 15)
        printf("Young adult");
    else if (age <= 26)
        printf("Old adult");
    else
        printf("Invalid Age");

    return 0;
}
