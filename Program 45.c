#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter x y z: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x==0 && y==0 && z==0)
        printf("origin");
    else if (x==0 && y==0)
        printf("z-axis");
    else if (x==0 && z==0)
        printf("y-axis");
    else if (y==0 && z==0)
        printf("x-axis");
    else if (x==0)
        printf("yz-plane");
    else
        printf("Other location");

    return 0;
}
