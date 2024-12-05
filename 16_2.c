#include <stdio.h>

int main()
{
    int grade, entrance_score = 0, entrance_marks;
    char activities, condition;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 0 && grade <= 100)
    {

        if (grade < 50)
        {
            printf("\nAs the grades are below 50%% the admission is rejected");
        }
        else if (grade >= 50 && grade < 70)
        {
            // activities
            printf("\nproceed to check activities");

            printf("\nEnter 'y/Y' for yes and 'n/N' for not participating in extracurricular: ");
            scanf(" %c", &activities);

            if (activities == 'y' || activities == 'Y')
            {
                entrance_score += 10;
                printf("\n10 bonus points added for extracurricular activities.\n");
            }
            else if (activities == 'n' || activities == 'N')
            {
                printf("\nNo bonus points added.\n");
            }
            else
            {
                printf("\nInvalid input. Please enter 'y' or 'n' only.\n");
            }

            printf("Admission granted with %d extracurricular activities", entrance_score);
        }
        else if (grade >= 70)
        {
            printf("\nentrance exam");
            printf("\nEnter your entrance marks: ");
            scanf("%d", &entrance_marks);

            if (entrance_marks >= 0 && entrance_marks <= 100)
            {

                if (entrance_marks < 40)
                {
                    printf("As the entrance marks are below 40%% the admission is rejected");
                }
                else if (entrance_marks >= 40 && entrance_marks < 60)
                {

                    // Check financial background
                    printf("\nCheck financial background");

                    printf("\nEnter 'g' for general and 'b' for backward class: ");
                    scanf(" %c", &condition);

                    if (condition == 'g')
                    {
                        printf("Standard fees");
                    }
                    else if (condition == 'b')
                    {
                        printf("Financial aid provided");
                    }
                    else
                    {
                        printf("\nInvalid input. Please enter 'g' or 'b' only.\n");
                    }
                }
                else
                {
                    printf("Admission granted");
                }
            }
            else
            {
                printf("Enter valid entrance marks");
            }
        }
    }
    else
    {
        printf("\nInvalid grade. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
