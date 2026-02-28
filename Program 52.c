#include <stdio.h>

int main(){
    float bmi;
    printf("Enter BMI (0-100): ");
    scanf("%f",&bmi);

    if(bmi<18.5)
        printf("Underweight");
    else if(bmi<25)
        printf("Normal weight");
    else if(bmi<30)
        printf("Overweight");
    else
        printf("Obese");

    return 0;
}
