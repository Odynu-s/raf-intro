#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void inputMatrix(int rows, int columns, int matrix[][columns]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
    return;
}

void printMatrix(int rows, int columns, int matrix[][columns]){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            scanf("%d ", matrix[i][j]);
        printf("\n");
    }
    return;
}

int minInMatrix(int rows, int columns, int matrix[][columns]){
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            if (matrix[i][j] < min)
                min = matrix[i][j];
   return min;
}

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns];
    inputMatrix(rows, columns, matrix);

    printf("%d", minInMatrix(rows, columns, matrix));
    return EXIT_SUCCESS;
}