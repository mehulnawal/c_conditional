#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year you want to check leap year: ");
    scanf("%d", &year);

    if (year > 0)
    {
        if (year % 4 == 0)
        {
            printf("Year is leap year");
        }
        else
        {
            printf("Year is not leap year");
        }
    }
    else
    {
        printf("Enter year above 0");
    }

    return 0;
}