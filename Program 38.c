#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0) printf("Origin");
    else if(x==0) printf("Y-Axis");
    else if(y==0) printf("X-Axis");
    else if(x>0 && y>0) printf("1st Quadrant");
    else if(x<0 && y>0) printf("2nd Quadrant");
    else if(x<0 && y<0) printf("3rd Quadrant");
    else printf("4th Quadrant");

    return 0;
}
