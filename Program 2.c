#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5;
int percentage;
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
percentage=(m1+m2+m3+m4+m5)/500;
if(Percentage >= 90)
{
printf("Grade A");
}
else if(Percentage >= 80)
{
printf("Grade B");
}
else if(Percentage >= 70)
{
printf("Grade C");
}
else if(Percentage >= 60)
{
printf("Grade D");
}
else if(Percentage >= 50)
{
printf("Grade E");
}
else
{
printf("Grade F");
}
return 0;
}
