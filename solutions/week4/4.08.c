#include <stdio.h>
#include <stdlib.h>

// test case 1 AAababbBBCc
// test case 2 Bb ccCcC DdDDDDdddDD ef

// returns uppercase letter if lowercase, unchanged otherwise
int toUpper(char c){
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
        else if (toUpper(c) == toUpper(previous))
            counter++;
        else {
            if (previous != ' ')
                printf("%c%d", toUpper(previous), counter);
            counter = 1;
        }
        previous = c;
    }
    printf("%c%d", toUpper(previous), counter);
    return EXIT_SUCCESS;
}