#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two sides: ");
    scanf("%d%d",&a,&b);

    if(a==b)
        printf("Square");
    else
        printf("Rectangle");

    return 0;
}
