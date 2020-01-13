#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int rows, int columns, int matrix[][columns]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
    return;
}

int sumAboveSecondary(int rows, int matrix[][rows]){
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < rows; j++)
            if (i + j < rows - 1)
                sum += matrix[i][j];
    return sum;
}

int main()
{
    int rows;
    scanf("%d", &rows);
    int matrix[rows][rows];
    inputMatrix(rows, rows, matrix);

    printf("%d", sumAboveSecondary(rows, matrix));
    return EXIT_SUCCESS;
}