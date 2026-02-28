#include <stdio.h>

int main() {
    int seat;
    scanf("%d",&seat);

    if(seat%2==0){
        if(seat%4==0)
            printf("Back");
        else
            printf("Middle");
    }
    else{
        if(seat%3==0)
            printf("Back");
        else
            printf("Front");
    }

    return 0;
}
