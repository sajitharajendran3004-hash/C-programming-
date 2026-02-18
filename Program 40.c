#include <stdio.h>
int main()
{
    int qty;
    float price,total,discount;

    printf("Enter quantity and price: ");
    scanf("%d%f",&qty,&price);

    total=qty*price;

    if(total>5000) discount=total*0.20;
    else if(total>2000) discount=total*0.10;
    else discount=0;

    printf("Total=%.2f\nDiscount=%.2f\nPayable=%.2f",
           total,discount,total-discount);
    return 0;
}
