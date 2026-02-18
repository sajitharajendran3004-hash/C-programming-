#include <stdio.h>

int main()
{
    int pen, notebook, pencil;
    int total;

    printf("Enter number of pens: ");
    scanf("%d", &pen);

    printf("Enter number of notebooks: ");
    scanf("%d", &notebook);

    printf("Enter number of pencils: ");
    scanf("%d", &pencil);

    total = (pen * 20) + (notebook * 70) + (pencil * 9);

    printf("Total Amount = %d units", total);

    return 0;
}
