#include <stdio.h>
#include <math.h>

int main(){
    int h,m;
    printf("Enter hour(24) and minute: ");
    scanf("%d%d",&h,&m);

    double hourAngle = (h%12)*30 + m*0.5;
    double minAngle = m*6;

    double angle = fabs(hourAngle - minAngle);

    if(angle>360) angle=fmod(angle,360);

    printf("Angle: %.2lf degrees",angle);
    return 0;
}
