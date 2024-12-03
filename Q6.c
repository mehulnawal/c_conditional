#include <stdio.h>

int main()
{

    float angle1, angle2, angle3;

    printf("Enter the value of side1: ");
    scanf("%f", &angle1);

    printf("Enter the value of side2: ");
    scanf("%f", &angle2);

    printf("Enter the value of side3: ");
    scanf("%f", &angle3);

    if (angle1 + angle2 + angle3 == 180)
    {
        if (angle1 < 90 && angle2 < 90 && angle3 < 90)
        {
            printf("It is acute triangle");
        }
        else
        {
            if (angle1 <= 90 || angle2 <= 90 || angle3 <= 90)
            {
                printf("It is right triangle");
            }
            else
            {
                if (angle1 >= 90 || angle2 >= 90 || angle3 >= 90)
                {
                    printf("It is obtuse triangle");
                }
                else
                {
                    printf("it is none of the above triangle");
                }
            }
        }
    }
    else{
        printf("Enter valid inputs of triangle");
    }

    return 0;
}