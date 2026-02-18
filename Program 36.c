#include <stdio.h>
int main()
{
    float h;
    printf("Enter height in cm: ");
    scanf("%f",&h);

    if(h<150) printf("Short");
    else if(h<165) printf("Average Height");
    else if(h<180) printf("Tall");
    else printf("Very Tall");

    return 0;
}
