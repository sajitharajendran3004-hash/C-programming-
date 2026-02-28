#include <stdio.h>

int main(){
    int age;
    float height;
    char gender;

    scanf("%d %c %f",&age,&gender,&height);

    if(height>=1.80 || (gender=='M' && age>=18))
        printf("Selected");
    else
        printf("Not Selected");

    return 0;
}
