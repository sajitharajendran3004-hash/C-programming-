#include <stdio.h>

int main() {
    int n,d,even=0,odd=0;
    scanf("%d",&n);

    for(int i=0;i<4;i++){
        d=n%10;
        if(d%2==0) even+=d;
        else odd+=d;
        n/=10;
    }

    printf("Even Sum: %d\nOdd Sum: %d",even,odd);
    return 0;
}
