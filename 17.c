#include <stdio.h>

int main()
{
    int income, credit_score, employment_status, debt_left;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income > 0)
    {
        if (income < 20000)
        {
            printf("\nLoan rejected");
        }
        else if (income >= 20000 && income <= 50000)
        {
            printf("\ncheck Credit score");

            printf("\nEnter your credit score: ");
            scanf("%d", &credit_score);

            if (credit_score > 0)
            {
                if (credit_score < 600)
                {
                    printf("\nLoan rejected");
                }
                else if (credit_score >= 600 && credit_score < 750)
                {
                    printf("\nHigher interest rate");
                }
                else
                {
                    printf("\nLow interest rate");
                }
            }
        }
        else
        {
            printf("\ncheck debt score");

            printf("\nEnter your total amount of debt left: ");
            scanf("%d", &debt_left);

            if (debt_left >= 0 && debt_left <= 100)
            {
                if (debt_left < 50)
                {
                    printf("\nLoan rejected");
                }
                else if (debt_left >= 50 && debt_left < 75)
                {
                    printf("\nCheck employment status");

                    printf("\nEnter your employment status: ");
                    scanf("%d", &employment_status);

                    if (employment_status < 2)
                    {
                        printf("\nloan rejected");
                    }

                    else
                    {
                        printf("\nloan granted");
                    }
                }
                else
                {
                    printf("Loan granted");
                }
            }
        }
    }
    else
    {
        printf("\nInvalid income. Enter income above 0");
    }

    return 0;
}