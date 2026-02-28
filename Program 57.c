#include <stdio.h>
#include <math.h>

int main(){
    int choice;
    printf("1.Sphere 2.Cube 3.Cylinder\n");
    scanf("%d",&choice);

    if(choice==1){
        double r;
        scanf("%lf",&r);
        printf("Surface Area: %.2lf\n",4*M_PI*r*r);
        printf("Volume: %.2lf",(4.0/3)*M_PI*r*r*r);
    }
    else if(choice==2){
        double a;
        scanf("%lf",&a);
        printf("Surface Area: %.2lf\n",6*a*a);
        printf("Volume: %.2lf",a*a*a);
    }
    else if(choice==3){
        double r,h;
        scanf("%lf%lf",&r,&h);
        printf("Surface Area: %.2lf\n",2*M_PI*r*(r+h));
        printf("Volume: %.2lf",M_PI*r*r*h);
    }

    return 0;
}
