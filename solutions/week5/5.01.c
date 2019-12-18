#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++) {
            printf("%4.d", i * j);
        }
        printf("%c", '\n');
    }
    return EXIT_SUCCESS;
}