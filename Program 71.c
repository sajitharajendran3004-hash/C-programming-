#include <stdio.h>

int main() {
    int seat;
    printf("Enter seat number: ");
    scanf("%d", &seat);

    if (seat >= 1 && seat <= 30)
        printf("Available");
    else if (seat >= 31 && seat <= 60)
        printf("Reserved");
    else if (seat >= 61 && seat <= 100)
        printf("Occupied");
    else
        printf("Invalid Seat");

    return 0;
}
