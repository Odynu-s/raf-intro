#include <stdio.h>

/** Takes input and prints largest number in input
test example
abc123def45hij67jk891omn */

int main(void)
{
    char c;
    int number = 0;
    int max = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            number = 10 * number + (c - '0');
        }else{
            number = 0;
        }

        if (max <= number)
            max = number;

    }
    printf("%d", max);
}