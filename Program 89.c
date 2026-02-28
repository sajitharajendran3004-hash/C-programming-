#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);

    if(a<1||a>6||b<1||b>6){
        printf("Invalid Input");
        return 0;
    }

    if(a+b>6)
        printf("YES");
    else
        printf("NO");

    return 0;
}
