#include <stdio.h>
#include <ctype.h>

int isVowel(char c){
    c=tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(){
    char a,b;
    printf("Enter two characters: ");
    scanf(" %c %c",&a,&b);

    int v1=isVowel(a), v2=isVowel(b);

    if(v1 && v2)
        printf("Sum: %d",a+b);
    else if(v1 || v2)
        printf("Difference: %d",abs(a-b));
    else
        printf("Product: %d",a*b);

    return 0;
}
