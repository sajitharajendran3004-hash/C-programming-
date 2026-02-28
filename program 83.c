#include <stdio.h>

int main() {
    int p;
    scanf("%d",&p);

    if(p==0)
        printf("Normal");
    else if(p<0){
        printf("Short sightedness\n");
        if(p>=-4) printf("Minimum");
        else if(p>=-8) printf("Moderate");
        else if(p>=-12) printf("High");
        else if(p>=-16) printf("Chronic");
        else printf("Invalid");
    }
    else{
        printf("Long sightedness\n");
        if(p<=4) printf("Minimum");
        else if(p<=8) printf("Moderate");
        else if(p<=12) printf("High");
        else if(p<=16) printf("Chronic");
        else printf("Invalid");
    }

    return 0;
}
