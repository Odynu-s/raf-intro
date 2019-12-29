#include <stdio.h>
#include <stdlib.h>

void matrica_zvezdica(int n, int m){
    if (n == 0)
        return;
    else{
        for (int i = 0; i < m; i++)
            printf("*");
        printf("\n");
        matrica_zvezdica(n - 1, m);
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    matrica_zvezdica(n, m);

    return EXIT_SUCCESS;
}