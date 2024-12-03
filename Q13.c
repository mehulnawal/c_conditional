#include<stdio.h>

int main()
{
    // +,-,/,*,%
    int num1, num2;

    printf("Enter the value of number1: ");
    scanf("%d", &num1);

    printf("Enter the value of number2: ");
    scanf("%d", &num2);

    printf("\n%d + %d = %d", num1, num2, num1 + num2);
    printf("\n%d - %d = %d", num1, num2, num1 - num2);
    printf("\n%d * %d = %d", num1, num2, num1 * num2);
    printf("\n%d / %d = %.2f", num1, num2,(float) num1 / num2);
    printf("\n%d %% %d = %d", num1, num2, num1 % num2);
    return 0;
}