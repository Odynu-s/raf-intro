#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100

int main(){
    char string[MAXLEN];
    gets(string);
    int i = 0;
    while (string[i] != '\0'){
        printf("%.3d", string[i]);
        i++;
    }
    return EXIT_SUCCESS;
}