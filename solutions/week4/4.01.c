#include <stdio.h>
#include <stdlib.h>

int main()
{
    int letter, printer;
    while ((letter = getchar())!= EOF)
    {
        if (vowel_checker(letter))
        {
            putchar(letter);
        }
    }
    return 0;
}

int vowel_checker(int c)
{
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
        c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U');
}