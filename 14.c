#include <stdio.h>

int main()
{

    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100)
    {

        if (marks >= 90)
        {
            grade = 'a';
        }
        else
        {
            if (marks >= 80)
            {
                grade = 'b';
            }
            else
            {
                if (marks >= 70)
                {
                    grade = 'c';
                }
                else
                {
                    if (marks >= 60)
                    {
                        grade = 'd';
                    }
                    else
                    {
                        if (marks >= 50)
                        {
                            grade = 'e';
                        }
                        else
                        {
                            printf("Fail");
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("Enter marks between 0 and 100");
    }

    switch (grade)
    {
    case 'a':
        printf("A");
        break;

    case 'b':
        printf("B");
        break;

    case 'c':
        printf("C");
        break;

    case 'd':
        printf("D");
        break;

    case 'e':
        printf("E");
        break;

    case 'f':
        printf("Fail");
        break;

    default:
        printf("Invalid value");
        break;
    }

    return 0;
}
