#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Calculator. What do you want to do?\n");
    printf("Please enter operator from this list: \n\"+\", \"-\", \"*\"\n");
    printf("Your operator: ");
    scanf("%c", &c);
    if (c == '+')
    {
        printf("Addition selected.\n");
    }
    else if (c == '-')
    {
        printf("Subtraction selected.\n");
    }
    else if (c == '*')
    {
        printf("Multiplication selected.\n");
    }
    else
    {
        printf("There is no such operator :(\n");
        exit(0);
    }

    return 0;
}
