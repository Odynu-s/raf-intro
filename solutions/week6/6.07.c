#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f3(int n)
{
    if (n == 1)
        return 1;
    return sqrt(n + f3(n - 1));

}

double f3_i(int n)
{
    double sum = 1;
    for (double i = 2; i <= n; i++)
        sum = sqrt(i + sum);
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n%lf", f3_i(n), f3(n));
    return EXIT_SUCCESS;
}