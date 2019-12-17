#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int currentNum = 0, sum = 0;
    int isplus = 1;

    while ((c = getchar()) != EOF){
        if (c == '+'){
            if (isplus)
                sum += currentNum;
            else
                sum -= currentNum;
            isplus = 1;
            currentNum = 0;
        }
        else if (c == '-'){
            if (isplus)
                sum += currentNum;
            else
                sum -= currentNum;
            isplus = 0;
            currentNum = 0;
        }
        else
            currentNum = 10 * currentNum + (c - '0');
    }
    if (isplus)
        sum += currentNum;
    else
        sum -= currentNum;

    printf("%d\n", sum);
    return EXIT_SUCCESS;
}