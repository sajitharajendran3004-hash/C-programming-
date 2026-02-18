#include <stdio.h>
int main()
{
    float a,b,c;

    printf("Enter success rate of 3 agents: ");
    scanf("%f%f%f",&a,&b,&c);

    if(a>=b && a>=c) printf("Agent 1 has highest priority");
    else if(b>=a && b>=c) printf("Agent 2 has highest priority");
    else printf("Agent 3 has highest priority");

    return 0;
}
