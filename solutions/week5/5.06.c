#include <stdio.h>
#include <stdlib.h>

void printStars(int n){
    for (int i = 1; i <= n; i++)
        printf("*");
    return;
}

void printSpaces(int n){
    for (int i = 1; i <= n; i++)
        printf(" ");
    return;
}

void printFirst(int n){
    printStars(n);
    return;
}

void printNotFirst(int n){
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n)
            printStars(1);
        else
            printSpaces(1);
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (i == 1 || i == n)
            printFirst(n);
        else
            printNotFirst(n);
        printf("\n");
    }
    return EXIT_SUCCESS;
}