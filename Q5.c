#include <stdio.h>

int main()
{

    char value;

    printf("Enter your character: ");
    scanf("%c", &value);

    if (value >= 97 && value <= 122)
    {
        if (value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u')
        {
            printf("%c is a vowel", value);
        }
        else
        {
            printf("%c is a constant", value);
        }
    }
    else
    {
        printf("Enter value only in lowercase character ");
    }

    return 0;
}