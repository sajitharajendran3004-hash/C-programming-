#include <stdio.h>
int main()
{
    float runs,overs,rate,percent;

    printf("Enter total runs and overs: ");
    scanf("%f%f",&runs,&overs);

    rate=runs/overs;
    percent=(rate/6)*100;

    printf("Percentage=%.2f\n",percent);

    if(percent<50) printf("Opponent team may win");
    else if(percent==50) printf("Equal chance");
    else printf("Batting team may win");

    return 0;
}
