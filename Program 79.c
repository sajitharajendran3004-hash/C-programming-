#include <stdio.h>

int main() {
    int temp;
    scanf("%d",&temp);

    if(temp<=10)
        printf("Cold");
    else if(temp<=25)
        printf("Moderate");
    else if(temp<=35)
        printf("Warm");
    else
        printf("Hot");

    return 0;
}
