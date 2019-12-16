#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int ones, tens, hundreds, thousands;
    thousands = a / 1000;
    a = a % 1000;
    hundreds = a / 100;
    a = a % 100;
    tens = a / 10;
    a = a % 10;
    ones = a;
    printf("%d%d%d%d", ones, tens, hundreds, thousands);
    return 0;
}