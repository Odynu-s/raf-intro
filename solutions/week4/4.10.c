#include <stdio.h>
#include <stdlib.h>

//test case ab23Bnh46zu37uj1jht21m

// returns uppercase letter if lowercase, unchanged otherwise
int toUpper(char c){
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

int isInRange(char c1, char c2){
    return pow(c1 - c2, 2) <= 4;
}

int main()
{
    char c, lastLetter;
    int currentNum = 0, sum = 0;

    while ((c = getchar()) != EOF){
        if (!isdigit(c)){
            if (isInRange(c, lastLetter))
                sum += currentNum;
            currentNum = 0;
            lastLetter = c;
        }
        else
            currentNum = currentNum * 10 + (c - '0');
    }
    printf("%d", sum);
    return EXIT_SUCCESS;
}