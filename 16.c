#include <stdio.h>

int main()
{

    int grade_amt, grade, entrance_score = 0, entrance_marks;
    char activities;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 0 && grade <= 100)
    {
        if (grade < 50)
        {
            printf("\nAdmission is rejected");
        }
        else if (grade >= 50 && grade <= 70)
        {
            printf("\nEnter y for participated and n for not participating: ");
            scanf(" %c", &activities);

            if (activities == 'y')
            {
                printf("Enter your entrance exam marks: ");
                scanf("%d", &entrance_marks);

                entrance_score += 10;
            }
            else if (activities == 'n')
            {
                printf("Enter your entrance exam marks: ");
                scanf("%d", &entrance_marks);
                entrance_score += 0;
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if (grade > 70)
        {
            printf("Enter your entrance exam marks: ");
            scanf("%d", &entrance_marks);
            
            if (entrance_marks >= 0 && entrance_marks <= 100)
            {
                if (entrance_marks < 40)
                {
                    printf("Admission rejected");
                }
                else if (entrance_marks >= 40 && entrance_marks <= 60)
                {
                    printf("check background");
                }
                else
                {
                    printf("Admission granted");
                }
            }
        }
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
