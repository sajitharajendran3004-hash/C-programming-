#include <stdio.h>

int main() {
    int x,discount=0;
    scanf("%d",&x);

    if(x<1 || x>10000){
        printf("Invalid");
        return 0;
    }

    if(x>5000) discount=500;
    else if(x>1000) discount=100;
    else if(x>100) discount=25;

    printf("Final Amount: %d",x-discount);
    return 0;
}
