#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int root=sqrt(n);
    if(root*root==n)
        printf("Perfect Square");
    else
        printf("Not Perfect Square");

    return 0;
}
