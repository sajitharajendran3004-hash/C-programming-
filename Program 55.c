#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a%2!=0 && b%2!=0)
        printf("Result: %.4f",(float)(a*b));
    else
        printf("Both are not odd");

    return 0;
}
