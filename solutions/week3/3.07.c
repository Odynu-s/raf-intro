#include <stdio.h>

int main()
{
    int num, digit, multiplier = 1;
    scanf("%d%d", &num, &digit);
    int currentDigit, result = 0;
    while (num > 0)
    {
        currentDigit = num % 10;

        if (currentDigit != digit)
        {
            result = result + currentDigit * multiplier;
            multiplier *= 10;
        }
        num /= 10;
    }

    printf("%d", result);
    return 0;
}