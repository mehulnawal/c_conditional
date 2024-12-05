#include <stdio.h>

int main()
{
    int income, no_of_dependents;
    float base_tax = 0.0, marital_tax = 0.0, dependent_tax = 0.0, disable_tax = 0.0, total_tax = 0.0, total_deduction = 0.0;
    char marital_status, disable;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income < 0)
    {
        if (income < 30000)
        {
            base_tax = 0.0;
            printf("\nNo tax");
        }
        else if (income >= 30000 && income < 60000)
        {
            base_tax = 0.10;
            printf("\nbase tax is 10%%");
        }
        else
        {
            printf("\nbase tax is 20%%");
            base_tax = 0.20;
        }
    }
    else
    {
        printf("\nEnter valid income. Income cannot be below 0");
    }

    printf("\nEnter 'm' for married and 's' for single: ");
    scanf(" %c", &marital_status);

    if (marital_status == 'm')
    {
        marital_tax = 0.05;
        printf("\n5%% tax deduction");
    }
    else if (marital_status == 's')
    {
        marital_tax = 0.00;
        printf("\nNo deduction");
    }
    else
    {
        printf("\nenter valid input");
    }

    printf("\nEnter no of dependents: ");
    scanf("%d", &no_of_dependents);

    if (no_of_dependents >= 0)
    {
        if (no_of_dependents <= 4)
        {
            dependent_tax = no_of_dependents * 0.02;
        }
        else
        {
            dependent_tax = 0.10;
        }
    }
    else
    {
        printf("Invalid number of dependents.\n");
    }

    printf("\nEnter y for yes and n for no if your are disable: ");
    scanf(" %c", &disable);

    // disable
    if (disable == 'y' || disable == 'Y')
    {
        disable_tax = 0.05;
        printf("\nadditional 5%% deduction");
    }
    else if (disable == 'n' || disable == 'N')
    {
        disable_tax = 0.00;
        printf("\nno additional");
    }
    else
    {
        printf("\nEnter valid input. y for yes and n for no");
    }

    total_deduction = base_tax * (marital_tax + dependent_tax + disable_tax);

    total_tax = (income * base_tax) - total_deduction;

    printf("Your total tax is: %.2f", total_tax);

    return 0;
}