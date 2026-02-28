#include <stdio.h>
#include <math.h>

int main() {
    int basic;
    char grade;
    scanf("%d %c",&basic,&grade);

    float hra=0.2*basic;
    float da=0.5*basic;
    float pf=0.11*basic;
    int allowance;

    if(grade=='A') allowance=1700;
    else if(grade=='B') allowance=1500;
    else allowance=1300;

    float total = basic + hra + da + allowance - pf;
    printf("%d",(int)round(total));

    return 0;
}
