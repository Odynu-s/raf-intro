#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100

void copyWithoutBlanks(char* s1, char* s2){
    int n = strlen(s1);
    for (int i = 0, place = 0; i < n; i++)
        if (s1[i] != ' ' && s1[i] != '\t')
            s2[place++] = s1[i];
}

int main(){
    char s1[MAXLEN], s2[MAXLEN];
    gets(s1);
    copyWithoutBlanks(s1, s2);
    printf("%s", s2);
    return EXIT_SUCCESS;
}