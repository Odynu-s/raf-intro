#include <stdio.h>
#include <stdlib.h>

void printStars(int n){
    for (int i = 0; i < n; i++)
        printf("*");
        return;
}

void printSpaces(int n){
    for (int i = 0; i < n; i++)
        printf(" ");
        return;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printSpaces(n - i);
        printStars(2 * i - 1);
        printf("\n");
    }
    return EXIT_SUCCESS;
}