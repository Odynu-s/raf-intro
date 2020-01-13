#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows;
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++, putchar('\n'))
        for (int j = 0; j < rows; j++)
            if (i < j)
                printf("%d ", 1);
            else if (i == j)
                printf("%d ", 2);
            else
                printf("%d ", 3);
    return EXIT_SUCCESS;
}