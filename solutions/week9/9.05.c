#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100

int main(){
    char s1[MAXLEN], s2[MAXLEN];
    gets(s1);
    gets(s2);
    int n1 = strlen(s1), n2 = strlen(s2), total = 0;
    for (int i = 0; i <= n1 - n2; i++){
        if (strncmp(&s1[i], s2, n2) == 0)
            total++;
    }
    printf("%d", total);
    return EXIT_SUCCESS;
}