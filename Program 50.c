#include <stdio.h>

int isLeap(int year) {
    if ((year%4==0 && year%100!=0) || (year%400==0))
        return 1;
    return 0;
}

int main() {
    int d,m,y, days=0;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d%d%d",&d,&m,&y);

    if(d<1 || m<1 || m>12 || y<1){
        printf("Invalid Date");
        return 0;
    }

    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(isLeap(y)) monthDays[1]=29;

    if(d>monthDays[m-1]){
        printf("Invalid Date");
        return 0;
    }

    int quarterStart = ((m-1)/3)*3;
    for(int i=quarterStart;i<m-1;i++)
        days += monthDays[i];
    days += d;

    printf("Days in Quarter till date: %d\n",days);

    if((m==3 && d>=1)||(m>3&&m<6)||(m==5&&d<=31))
        printf("Season: Spring");
    else if((m==6&&d>=1)||(m>6&&m<9)||(m==8&&d<=31))
        printf("Season: Summer");
    else if((m==9&&d>=1)||(m>9&&m<12)||(m==11&&d<=30))
        printf("Season: Autumn");
    else
        printf("Season: Winter");

    return 0;
}
