#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int low, high;
    scanf("%d%d", &low, &high);
    for (int i = low; i <= high; i++) {
        if (pom(i) < 3)
            printf("%d\n", i);
    }

    return EXIT_SUCCESS;
}

int pom(int arg){
    int result = INT_MIN;
    while (arg > 9) {
        int num1 = arg % 10;
        int num2 = (arg / 10) % 10; // 123 -> 2
        int temp = abs(num2 - num1);
        if (temp > result)
            result = temp;
        arg /= 10;
    }
    return result;
}