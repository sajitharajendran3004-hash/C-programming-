#include <stdio.h>

int main(){
    float price, total;
    int qty;
    char m;

    printf("Enter Selling Price per unit: ");
    scanf("%f",&price);
    printf("Enter Quantity: ");
    scanf("%d",&qty);
    printf("Enter Middleman (A/B/C): ");
    scanf(" %c",&m);

    total = price * qty;
    printf("Original Amount: %.2f\n",total);

    if(m=='A')
        total -= total*0.05;
    else if(m=='B')
        total -= total*0.10;
    else if(m=='C')
        total -= total*0.15;

    printf("After Deduction: %.2f",total);
    return 0;
}
