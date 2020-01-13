#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int rows, int columns, int matrix[][columns]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
    return;
}

void printMatrix(int rows, int columns, int matrix[][columns]){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void sortColumns(int rows, int columns, int matrix[][columns]){
    int changed = 1;
    while (changed) {
        changed = 0;
        for (int i = 0; i < rows - 1; i++)
            for (int j = 0; j < columns; j++)
                if (matrix[i][j] > matrix[i+1][j]) {
                    swap(&matrix[i][j], &matrix[i+1][j]);
                    changed = 1;
                }
    }
    return;
}

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns];

    inputMatrix(rows, columns, matrix);
    sortColumns(rows, columns, matrix);
    printMatrix(rows, columns, matrix);
    return EXIT_SUCCESS;
}