#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,m6;
  scanf("%d%d%d%d%d%d,&m1,&m2,&m3,&m4,&m5,&m6);
  percentage=(m1+m2+m3+m4+m5+m6)/600;
if(Percentage >= 95)
{
printf("Grade A");
}
else if(Percentage >= 85)
{
printf("Grade B");
}
else if(Percentage >= 75)
{
printf("Grade C");
}
else if(Percentage >= 65)
{
printf("Grade D");
}
else if(Percentage >= 45)
{
printf("Grade E");
}
else
{
printf("Grade F");
}

return 0;
}
