#include <stdio.h>

int main() {
    float dist;
    printf("Enter distance: ");
    scanf("%f", &dist);

    if (dist > 1000) {
        printf("Distance in km: %.2f", dist / 1000);
    } else {
        printf("Distance remains same: %.2f", dist);
    }

    return 0;
}
