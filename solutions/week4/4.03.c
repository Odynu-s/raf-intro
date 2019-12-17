//
// Created by Marko Edelman on 10/17/19.
//

#include <stdio.h>

int main(void){
    char c, previous = ' ';

    while ((c = getchar()) != EOF){
        if (previous == ' ')
            if (!(c >= 'A' && c <= 'Z'))
                putchar(c - 32);
            else
                putchar(c);
        else
            putchar(c);
        previous = c;
    }

    return 0;
}