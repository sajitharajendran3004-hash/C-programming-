#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n<0){
        printf("negative ");
        n=-n;
    }

    char *words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    if(n==0) printf("zero");

    while(n>0){
        printf("%s ",words[n%10]);
        n/=10;
    }

    return 0;
}
