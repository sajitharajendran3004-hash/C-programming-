#include <stdio.h>

int main() {
    float amount, discount = 0;

    printf("Enter Purchase Amount: ");
    scanf("%f", &amount);

    if (amount >= 5000)
        discount = amount * 0.20;
    else if (amount >= 2000)
        discount = amount * 0.10;
    else if (amount >= 1000)
        discount = amount * 0.05;

    printf("Discount Amount: %.2f", discount);
    return 0;
}
