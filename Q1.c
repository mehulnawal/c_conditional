#include <stdio.h>

int main()
{
    int num1;

    printf("Enter your number: ");
    scanf("%d", &num1);

    if (num1 != 0)
    {
        if (num1 > 0)
        {
            printf("+ve number");
        }
        else
        {
            printf("-ve number");
        }
    }
    else
    {
        printf("equal to 0");
    }

    return 0;
}