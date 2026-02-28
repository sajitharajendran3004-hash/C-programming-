#include <stdio.h>

int main() {
    int x,y,sum;
    scanf("%d%d",&x,&y);

    sum=x+y;

    if(sum%2==0)
        printf("Sum is Even\n");
    else
        printf("Sum is Odd\n");

    if(x>0 && y>0)
        printf("Both Positive");
    else if(x<0 && y<0)
        printf("Both Negative");
    else
        printf("One Positive One Negative");

    return 0;
}
