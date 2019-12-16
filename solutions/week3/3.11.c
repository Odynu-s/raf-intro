#include <stdio.h>

int pom(int arg, int divisor)
{
    int current_digit, result = 0, multiplier = 1;
    while (arg > 0)
    {
        current_digit = arg % 10;
        if (current_digit % divisor != 0)
        {
            result = result + current_digit * multiplier;
            multiplier *= 10;
        }
        arg /= 10;
    }
    return result;
}

int main()
{
    int low, up;
    scanf("%d%d", &low, &up);
    while (low <= up)
    {
        if (low == pom(low, 2))
        {
            printf("%d\n", pom(low, 2));
        }
        low++;
    }
    return 0;
}