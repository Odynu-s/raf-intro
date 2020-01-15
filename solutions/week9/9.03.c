#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100

void printCharacters(char *ptr, int charNum){
    for (int i = 0; i < charNum; i++)
        putchar(*(ptr+i));
}

int main(){
    char s1[MAXLEN];
    gets(s1);
    int n = strlen(s1);
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= n - i; j++) {
            printCharacters(s1 + j, i);
            putchar('\n');
        }
    return EXIT_SUCCESS;
}