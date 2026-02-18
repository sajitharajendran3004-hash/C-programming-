#include <stdio.h>
int main()
{
    int num,div;

    printf("Enter number and divisor: ");
    scanf("%d%d",&num,&div);

    if(div==0)
        printf("Error! Division by zero not allowed");
    else if(num%div==0)
        printf("Divisible");
    else
        printf("Not Divisible");

    return 0;
}
