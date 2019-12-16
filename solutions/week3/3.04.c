#include <stdio.h>

float arithmetic_mean(int num)
{
    float total = 0, divisor = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            total += i;
            divisor++;
        }
    }
    return total / divisor;
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%.2f", arithmetic_mean(n));
    return 0;
}