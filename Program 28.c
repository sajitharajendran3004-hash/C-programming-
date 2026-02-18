#include <stdio.h>
int main()
{
    int age;
    float fee,expenses;

    printf("Enter age: ");
    scanf("%d",&age);

    printf("Enter tuition fee and total expenses: ");
    scanf("%f%f",&fee,&expenses);

    if(age>=18 && age<=25)
    {
        if(fee<expenses)
            printf("Eligible for financial support");
        else
            printf("Manageable expenses");
    }
    else
        printf("Age not eligible");

    return 0;
}
