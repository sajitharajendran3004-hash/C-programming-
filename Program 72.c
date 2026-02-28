#include <stdio.h>

int main() {
    float x1,y1,x2,y2,slope;

    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

    if (x2 - x1 == 0)
        printf("Vertical Line");
    else {
        slope = (y2 - y1) / (x2 - x1);
        if (slope > 0)
            printf("Land rises");
        else if (slope < 0)
            printf("Land descends");
        else
            printf("Horizontal land");
    }

    return 0;
}
