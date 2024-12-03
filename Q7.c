#include <stdio.h>

int main()
{

    int num1, num2, num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    if (num1 >= 0 && num2 >= 0 && num3 >= 0)
    {
        if (num1 > num2 && num1 > num3)
        {
            printf("%d is max", num1);
        }
        else
        {
            if (num2 > num3)
            {
                printf("%d is max", num2);
            }
            else
            {
                printf("%d is max", num3);
            }
        }
    }
    else
    {

        if (num1 == num2 == num3)
        {
            printf("All numbers are equal");
        }
        else
        {
            printf("Enter valid numbers");
        }
    }

    return 0;
}