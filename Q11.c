#include <stdio.h>

int main()
{
    // m -1000
    // cm - 100000
    // mm - 1000000

    int km, m, cm, mm;

    printf("Enter the value in km: ");
    scanf("%d", &km);

    m = km * 1000;
    cm = km * 100000;
    mm = km * 1000000;

    printf("\nEnter the value %d km in m is %d: ", km, m);
    printf("\nEnter the value %d km in cm is %d: ", km, cm);
    printf("\nEnter the value %d km in mm is %d: ", km, mm);

    return 0;
}