#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int result = pom(a, 5) + pom(b, 5) + pom(c, 5);
    printf("%d\n", result);
    return 0;
}

int pom(int arg, int k)
{
    int digit, result = 0, multiplier = 1;
    while (arg > 0)
    {
        digit = arg % 10;
        if (digit >= k)
        {
            result += digit * multiplier;
            multiplier *= 10;
        }
        arg /= 10;
    }
    return result;
}