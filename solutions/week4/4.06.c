#include <stdio.h>
#include <stdlib.h>

char caesar(char c, int offset)
{
    if (c >= 'a' && c <= 'z')
        return ((c % 'a') + offset) % 26 + 'a';
    else if (c >= 'A' && c <= 'Z')
        return ((c % 'A') + offset) % 26 + 'A';
    else
        return c;
}

int main(void)
{
    char c;

    while ((c = getchar()) != EOF)
    {
        putchar(caesar(c, 3));
    }

    return EXIT_SUCCESS;

}