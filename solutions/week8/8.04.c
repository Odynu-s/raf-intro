#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int rows, int columns, int matrix[][columns]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
    return;
}

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns];

    inputMatrix(rows, columns, matrix);

    for (int i  = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++)
            printf("%d ", matrix[j][i]);
        printf("\n");
    }
    return EXIT_SUCCESS;
}