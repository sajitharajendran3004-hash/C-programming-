#include <stdio.h>

int main(){
    int f;
    scanf("%d",&f);

    if(f<20)
        printf("Infrasound: %.2f Hz",(float)f);
    else if(f<=20000)
        printf("Audible sound: %.2f Hz",(float)f);
    else
        printf("Ultrasound: %.2f Hz",(float)f);

    return 0;
}
