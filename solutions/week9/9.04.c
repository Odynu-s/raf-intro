#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100



int main(){
    char s1[MAXLEN], s2[MAXLEN];
    gets(s1);
    int n = strlen(s1);
    int i = 0, place = 0;
    while (i < n){
        s2[place] = s1[i];
        if (place % 2 == 1) i++;
        place++;
    }
    s2[place] = '\0';
    puts(s2);
    return EXIT_SUCCESS;
}