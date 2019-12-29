#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f4(int i, int n)
{
    if (i == n)
        return sqrt(1.0 * n);
    return sqrt(i + f4(i + 1, n));
}

double f4_i(int n)
{
    double result = sqrt(n);
    for (int i = n - 1; i >= 1; i--)
        result = sqrt(i + result);
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n%lf", f4_i(n), f4(1, n));
    return EXIT_SUCCESS;
}