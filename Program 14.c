#include <stdio.h>

int main()
{
    int total, perDay, days, needed;

    printf("Enter total chocolates: ");
    scanf("%d", &total);

    printf("Enter chocolates eaten per day: ");
    scanf("%d", &perDay);

    printf("Enter planned number of days: ");
    scanf("%d", &days);

    needed = perDay * days;

    if(total >= needed)
        printf("1");   // chocolates will last
    else
        printf("0");   // chocolates will run out

    return 0;
}
