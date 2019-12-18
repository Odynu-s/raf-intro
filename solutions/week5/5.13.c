#include <stdio.h>
#include <stdlib.h>

int helper(int a){
    int hundreds = a / 100;
    int tens = (a / 10) % 10;
    int ones = a % 10;
    if (hundreds < 6 && tens % 2 == 0 && ones > tens)
        return 1;
    return 0;

}

int main()
{

    for (int i = 100; i < 1000; i++)
        if (helper(i))
            printf("%d ", i);

    return EXIT_SUCCESS;
}