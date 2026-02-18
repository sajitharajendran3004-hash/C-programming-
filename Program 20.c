#include <stdio.h>

int main()
{
    float investment, buyPrice, currentPrice, shares, value, result;

    printf("Enter investment amount: ");
    scanf("%f", &investment);

    printf("Enter purchase price per share: ");
    scanf("%f", &buyPrice);

    printf("Enter current price per share: ");
    scanf("%f", &currentPrice);

    shares = investment / buyPrice;
    value = shares * currentPrice;
    result = value - investment;

    if(result > 0)
        printf("Profit = %.2f", result);
    else if(result < 0)
        printf("Loss = %.2f", -result);
    else
        printf("No Profit No Loss");

    return 0;
}
