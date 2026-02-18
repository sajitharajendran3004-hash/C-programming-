#include <stdio.h>

int main()
{
    int symptoms;

    printf("Enter number of symptoms: ");
    if(scanf("%d", &symptoms)!=1 || symptoms<0)
    {
        printf("Invalid input!");
        return 0;
    }

    if(symptoms >= 5)
        printf("Critical Condition - High Priority");
    else if(symptoms >= 3)
        printf("Moderate Condition - Medium Priority");
    else
        printf("Stable Condition - Low Priority");

    return 0;
}
