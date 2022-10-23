#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void delay(int seconds)
{
    clock_t time_start = clock();
    while(clock()< time_start+seconds*1000){}
}


int main()
{
    char c_operator;
    float a, b, result;
    printf("Calculator.\n");
    //Entering numbers //
    printf("Please, enter the first number: ");
    scanf("%f", &a);
    printf("\nPlease, enter the second number: ");
    scanf("%f", &b);
    printf("\n");
    // Choosing operator //
    printf("Please enter operator from this list: \n\"+\", \"-\", \"*\", \"/\"\n");
    printf("Your operator: ");
    scanf("%s", &c_operator);
    if (c_operator == '+')
    {
        printf("Addition selected.\n");
        result = a + b;
    }
    else if (c_operator == '-')
    {
        printf("Subtraction selected.\n");
        result = a - b;
    }
    else if (c_operator == '*')
    {
        printf("Multiplication selected.\n");
        result = a * b;
    }
    else if (c_operator == '/')
    {
        printf("Division selected.\n");
        result = a / b;
    }
    else

    {
        printf("There is no such operator :(\n");
        exit(0);
    }

    printf("Process started. I'm thinking");
    delay(1);
    printf(".");
    delay(1);
    printf(".");
    delay(1);
    printf(".\n");
    printf("Your result is %.2f. Gratulations!\n", result);
    return 0;
}
