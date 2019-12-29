#include <stdio.h>
#include <stdlib.h>

double f1(int n)
{
    if (n == 1)
        return 1;
    return n + 1/f1(n - 1);
}

double f1_i(int n)
{
    double sum = 1.0;
    for (int i = 2; i <= n; i++)
        sum = i + 1/sum;
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n%lf", f1_i(n), f1(n));

    return EXIT_SUCCESS;
}