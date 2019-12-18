#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", ((i + j) % n) + 1);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}