#include <stdio.h>
#include <stdlib.h>

double f2(int i, int n)
{
    if (i == n)
        return 1.0 * n;
    return i + 1.0/f2(i + 1, n);
}

double f2_i(int n)
{
    double result = n;
    for (int i = n - 1; i >= 1; i--)
        result = i + 1.0/result;
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n%lf", f2_i(n), f2(1, n));
    return EXIT_SUCCESS;
}