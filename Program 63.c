#include <stdio.h>
#include <math.h>

int main(){
    double base,exp;
    scanf("%lf%lf",&base,&exp);

    printf("Result: %.2lf",pow(base,exp));
    return 0;
}
