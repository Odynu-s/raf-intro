#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printMatrix(int n, int matrix[][n]){
    for (int i = 0; i < n; i++, putchar('\n'))
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
}

int numOfDigits(int n){
    int total = 0;
    while (n > 0){
        n = n / 10;
        total++;
    }
    return total;
}

int nextNum(int n){
    return (n + 10) % 10;
}

void fillMain(int n, int rows, int matrix[][rows]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < rows; j++)
            if (i == j){
                matrix[i][j] = n % 10;
                n /= 10;
            }
}

void fillSecondary(int n, int rows, int matrix[][rows]){
    int temp = (int) pow(10, numOfDigits(n) - 1);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < rows; j++)
            if (i + j == rows - 1) {
                matrix[i][j] = n / temp;
                n %= temp;
                temp /= 10;
            }
}

void fillRest(int rows, int matrix[][rows]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < rows; j++)
                if   (i + j < rows - 1 && i < j){
                matrix[i][j] = nextNum(matrix[rows-1-j][j] - 1);
            }else if (i + j > rows - 1 && i < j){
                matrix[i][j] = nextNum(matrix[j][j] + 1);
            }else if (i + j > rows - 1 && i > j){
                matrix[i][j] = nextNum(matrix[rows-1-j][j] - 1);
            }else if (i + j < rows - 1 && i > j){
                matrix[i][j] = nextNum(matrix[j][j] + 1);
            }
}

void fillMatrix(int n, int rows, int matrix[][rows]){
    fillMain(n, rows, matrix);
    fillSecondary(n, rows, matrix);
    fillRest(rows, matrix);
}

int main(){

    int n;
    scanf("%d", &n);
    int rows = numOfDigits(n);
    int matrix[rows][rows];
    fillMatrix(n, rows, matrix);
    printMatrix(rows, matrix);

    return EXIT_SUCCESS;
}