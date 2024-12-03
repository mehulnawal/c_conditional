#include <stdio.h>

int main()
{
    int num1, product;

    printf("Enter your number: ");
    scanf("%d", &num1);

    product = 1;

    if (num1 >= 0)
    {
        if (num1 == 0 || num1 == 1)
        {
            printf("Factorial is 1");
        }
        else
        {
            while (num1 != 1)
            {
                product = product * num1;
                num1--;
                printf("%d", product);
            }
        }
    }

    return 0;
}