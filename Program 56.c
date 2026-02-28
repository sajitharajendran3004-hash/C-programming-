#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n>=10000 && n<=99999)
        printf("5 Digit Number");
    else
        printf("Not a 5 Digit Number");

    return 0;
}
