#include <stdio.h>
#include <math.h>

int main(){
    int ch;
    printf("1.Cone 2.Pyramid 3.Prism\n");
    scanf("%d",&ch);

    if(ch==1){
        double r,h;
        scanf("%lf%lf",&r,&h);
        printf("Volume: %.2lf",(1.0/3)*M_PI*r*r*h);
    }
    else if(ch==2){
        double base,h;
        scanf("%lf%lf",&base,&h);
        printf("Volume: %.2lf",(1.0/3)*base*h);
    }
    else if(ch==3){
        double base,h;
        scanf("%lf%lf",&base,&h);
        printf("Volume: %.2lf",base*h);
    }

    return 0;
}
