#include <stdio.h>
#include <stdlib.h>

// returns uppercase letter if lowercase, unchanged otherwise
int toupper(char c){
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int main()
{
    char c, previous;
    int counter = 1;

    previous = getchar();
    while ((c = getchar()) != EOF){
        if (c == ' ')
            continue;
        else if (toupper(c) == toupper(previous))
            counter++;
        else {
            if (previous != ' ')
                printf("%c%d", toupper(previous), counter);
            counter = 1;
        }
        previous = c;
    }
    return EXIT_SUCCESS;
}