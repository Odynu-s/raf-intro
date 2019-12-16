#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}

int fact(int n)
{
    int total = 1;
    while (n > 0)
    {
        total *= n;
        n--;
    }
    return total;
}