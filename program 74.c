#include <stdio.h>

int main() {
    int m,i,pass=1,total=0;
    for(i=1;i<=5;i++){
        scanf("%d",&m);
        if(m<0 || m>100){
            printf("Invalid Marks");
            return 0;
        }
        if(m<=35) pass=0;
        total+=m;
    }

    if(pass){
        float per = total/5.0;
        printf("Percentage: %.2f\n",per);
        if(per>=90) printf("Grade A");
        else if(per>=75) printf("Grade B");
        else if(per>=50) printf("Grade C");
        else printf("Grade D");
    }
    else
        printf("Failed");

    return 0;
}
