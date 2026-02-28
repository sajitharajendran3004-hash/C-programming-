#include <stdio.h>
#include <math.h>

int main(){
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

    int dist = abs(x2-x1) + abs(y2-y1);
    printf("Manhattan Distance: %d",dist);

    return 0;
}
