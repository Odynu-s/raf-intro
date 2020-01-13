#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int rows, int columns, int matrix[][columns]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
}

int main(){
    int rows1, columns1, rows2, columns2;
    scanf("%d %d", &rows1, &columns1);
    int matrix1[rows1][columns1];
    inputMatrix(rows1, columns1, matrix1);
    scanf("%d %d", &rows2, &columns2);
    int matrix2[rows2][columns2];
    inputMatrix(rows2, columns2, matrix2);

    int found = 0, helper = 1;
    for (int a = 0; a < rows2; a++){
        for (int b = 0; b < columns2; b++){
            for (int i = 0; i < rows2; i++){
                for (int j = 0; j < columns2; j++){
                    if (matrix1[i+a][j+b] != matrix2[i][j])
                        helper = 0;
                }
            }
            if (helper)
                found = 1;
            helper = 1;
        }
    }

    if (found)
        printf("DA");
    else
        printf("NE");
    return EXIT_SUCCESS;
}