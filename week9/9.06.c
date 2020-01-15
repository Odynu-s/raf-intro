#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100

int main(){
    char s1[MAXLEN], s2[MAXLEN];
    gets(s1);
    int n1 = strlen(s1), place = 0;
    for (int i = n1-1; i >= 0; i--, place++){
        s2[place] = s1[i];
    }
    s2[place+1] = '\0';
    puts(s2);
    return EXIT_SUCCESS;
}