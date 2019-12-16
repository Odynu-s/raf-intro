#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", flip(num));
}

int flip(int num)
{
    int flipped = 0;
    while (num > 0)
    {
        flipped = 10 * flipped + (num % 10);
        num /= 10;
    }
    return flipped;
}