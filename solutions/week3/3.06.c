#include <stdio.h>

int main()
{
    int dividend, divisor;
    scanf("%d%d", &dividend, &divisor);
    while (dividend > divisor)
    {
        dividend -= divisor;
    }
    printf("%d", dividend);
    return 0;

}