#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Enter character: ");
    scanf(" %c",&c);

    if(isalpha(c)){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else
        printf("Invalid");

    return 0;
}
