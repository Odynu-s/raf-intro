#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}

int fib(int n)
{
    int total = 0;
    int n1 = 0;
    int n2 = 1;
    for (int i = 0; i < n; i++)
    {
        total = n1 + n2;
        n2 = n1;
        n1 = total;
    }
    return total;
}