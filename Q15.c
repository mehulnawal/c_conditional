#include <stdio.h>

int main()
{

    int age_amt, health_amt, job_amt, driving_amt, location_amt, age, job_type, driving_history, total_amt;

    char health_issues, location;

    // age
    printf("Enter your age: ");
    scanf("%d", &age);

    // heath condition
    printf("Enter d for diabetes or h for heart disease and enter n if dont have any: ");
    scanf(" %c", &health_issues);

    // driving
    printf("Enter amt of accidents in last 3 yrs:; ");
    scanf("%d", &driving_history);

    // location
    printf("Enter y for hight rik area, m for medium for medium risk");
    scanf(" %c", &location);

    // age
    if (age >= 18)
    {
        if (age >= 18 && age <= 25)
        {
            age_amt = 200;
        }
        else if (age >= 26 && age <= 40)
        {
            age_amt = 150;
        }
        else
        {
            age_amt = 100;
        }
    }
    else
    {
        printf("You are not eligible for insurance");
    }

    // health
    if (health_issues == 'd' || health_issues == 'h')
    {
        health_amt = 100;
    }
    else if (health_issues == 'n')
    {
        health_amt = 0;
    }
    else
    {
        printf("Enter d for diabetes or h for heart disease and enter n if dont have any");
    }

    // job

    // driving
    if (driving_history >= 2)
    {
        driving_amt = 150;
    }
    else
    {
        driving_amt = 0;
    }

    // location
    if (location == 'y')
    {
        location_amt = 200;
    }
    else if (location == 'm')
    {
        location_amt = 100;
    }
    else
    {
        location_amt = 0;
    }

    total_amt = age_amt + health_amt + driving_amt + location_amt;

    printf("\nYour total insurance amt is: %d ", total_amt);

    return 0;
}