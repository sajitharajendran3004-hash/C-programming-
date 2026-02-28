#include <stdio.h>

int main() {
    int month;
    printf("Enter Month (1-12): ");
    scanf("%d", &month);

    if (month==1||month==2||month==10||month==11||month==12)
        printf("Sunrise: 7:00 AM\nSunset: 5:30 PM");
    else if (month==3)
        printf("Sunrise: 6:30 AM\nSunset: 6:30 PM");
    else if (month>=4 && month<=8)
        printf("Sunrise: 5:30 AM\nSunset: 7:30 PM");
    else if (month==9)
        printf("Sunrise: 6:30 AM\nSunset: 6:00 PM");
    else
        printf("Invalid Month");

    return 0;
}
