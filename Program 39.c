#include <stdio.h>
int main()
{
    float limit,speed;
    printf("Enter speed limit and vehicle speed: ");
    scanf("%f%f",&limit,&speed);

    if(speed>limit)
        printf("Warning: Over Speed!");
    else
        printf("Within Speed Limit");

    return 0;
}
