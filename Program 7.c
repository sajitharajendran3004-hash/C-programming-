#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    if((a ^ b) == 0)
        printf("Both numbers are Equal");
    else
        printf("Both numbers are Not Equal");

    return 0;
}
