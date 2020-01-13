#include <stdio.h>
#include <stdlib.h>

void printMatrix(int rows, int columns, int a[][rows])
{
    for (int i = 0; i < rows; i++, putchar('\n'))
        for (int j = 0; j < columns; j++)
            printf("%d ", a[j][i]);
    return;
}

void changeDirection(char *direction){
    switch (*direction){
        case 'r':
            *direction = 'd';
            break;
        case 'd':
            *direction = 'l';
            break;
        case 'l':
            *direction = 'u';
            break;
        case 'u':
            *direction = 'r';
            break;
    }
    return;
}

int main()
{
    int m, n;
    scanf("%d %d", &n, &m);

    int a[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = -1;


    char direction = 'r';
    int posx = 0, posy = 0, directionCounter, counter = 1;

    while (directionCounter != 4){
        a[posx][posy] = counter;

        switch (direction)
        {

            case 'r':
                if (a[posx-1][posy] == -1){
                    posx--;
                    directionCounter = 0;
                    counter++;
                }
                else{
                    changeDirection(&direction);
                    directionCounter++;
                }
                break;

            case 'd':
                if (a[posx][posy - 1] == -1){
                    posy--;
                    directionCounter = 0;
                    counter++;
                }
                else{
                    changeDirection(&direction);
                    directionCounter++;
                }
                break;

            case 'l':
                if (a[posx+1][posy] == -1){
                    posx++;
                    directionCounter = 0;
                    counter++;
                }
                else{
                    changeDirection(&direction);
                    directionCounter++;
                }
                break;

            case 'u':
                if (a[posx][posy + 1] == -1){
                    posy++;
                    directionCounter = 0;
                    counter++;
                }
                else{
                    changeDirection(&direction);
                    directionCounter++;
                }
                break;
        }
    }
    printMatrix(n, m, a);
    return EXIT_SUCCESS;
}