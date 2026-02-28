#include <stdio.h>

int main() {
    int choice;
    double m,v,h,energy;

    printf("1.Kinetic\n2.Potential\n");
    scanf("%d",&choice);

    if(choice==1){
        scanf("%lf%lf",&m,&v);
        energy = 0.5*m*v*v;
        printf("KE: %.2lf",energy);
    }
    else if(choice==2){
        scanf("%lf%lf",&m,&h);
        energy = m*9.8*h;
        printf("PE: %.2lf",energy);
    }
    else
        printf("Invalid Choice");

    return 0;
}
