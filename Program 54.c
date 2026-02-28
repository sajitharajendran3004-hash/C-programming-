#include <stdio.h>
#include <math.h>

int main(){
    double angle,x,y;
    char dir;

    printf("Enter angle: ");
    scanf("%lf",&angle);
    printf("Enter direction (c/a): ");
    scanf(" %c",&dir);
    printf("Enter x y: ");
    scanf("%lf%lf",&x,&y);

    double rad = angle * M_PI/180;
    if(dir=='c') rad = -rad;

    double newX = x*cos(rad) - y*sin(rad);
    double newY = x*sin(rad) + y*cos(rad);

    printf("New Coordinates: %.2lf , %.2lf",newX,newY);
    return 0;
}
