#include <stdio.h>

int main() {
    int a[5],i,j,count,max=0;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++){
        count=0;
        for(j=0;j<5;j++)
            if(a[i]==a[j]) count++;
        if(count>max) max=count;
    }

    printf("Minimum Changes: %d",5-max);
    return 0;
}
