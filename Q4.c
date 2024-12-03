#include <stdio.h>

int main()
{
    int subject1;
    char grade;

    printf("Enter marks of subject1: ");
    scanf("%d", &subject1);

    if (subject1 >= 0 && subject1 <= 100)
    {
        if (subject1 >= 90)
        {
            printf("A+");
        }
        else
        {
            if (subject1 >= 80)
            {
                printf("A");
            }
            else
            {
                if (subject1 >= 70)
                {
                    printf("B");
                }
                else
                {
                    if (subject1 >= 60)
                    {
                        printf("C");
                    }
                    else
                    {
                        if (subject1 >= 50)
                        {
                            printf("D");
                        }
                        else
                        {
                            if (subject1 >= 40)
                            {
                                printf("E");
                            }
                            else
                                printf("F");
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("Enter marks above 0 and below 100");
    }

    return 0;
}