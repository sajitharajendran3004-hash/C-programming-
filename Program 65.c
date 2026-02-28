#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if(fabs(c*c - (a*a+b*b))<0.0001)
        printf("Right Triangle");
    else
        printf("Not a Right Triangle");

    return 0;
}
