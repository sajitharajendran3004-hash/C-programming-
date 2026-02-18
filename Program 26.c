#include <stdio.h>
int main()
{
    int a,b,prod;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);

    prod=a*b;

    if(prod%2==0)
        printf("Result = %d", prod/2);
    else
        printf("Result = %d", prod/3);

    return 0;
}
