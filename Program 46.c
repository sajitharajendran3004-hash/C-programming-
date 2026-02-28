#include <stdio.h>

int main() {
    float salary, increment;
    int rating;

    printf("Enter Salary: ");
    scanf("%f", &salary);
    printf("Enter Performance Rating (1-5): ");
    scanf("%d", &rating);

    switch(rating) {
        case 5: increment = salary * 0.20; break;
        case 4: increment = salary * 0.15; break;
        case 3: increment = salary * 0.10; break;
        case 2: increment = salary * 0.05; break;
        default: increment = 0;
    }

    printf("Annual Increment: %.2f", increment);
    return 0;
}
