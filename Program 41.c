#include <stdio.h>
int main()
{
    float miles,gallons,mpg;
    printf("Enter miles and gallons: ");
    scanf("%f%f",&miles,&gallons);

    mpg=miles/gallons;

    printf("MPG=%.2f\n",mpg);

    if(mpg<15) printf("Poor");
    else if(mpg<25) printf("Average");
    else if(mpg<35) printf("Good");
    else printf("Excellent");

    return 0;
}
