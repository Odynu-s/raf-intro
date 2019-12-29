#include <stdio.h>
#include <stdlib.h>

int pow_rek(int a, int b){
    if (b == 0)
        return 1;
    return a * pow_rek(a, b - 1);
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", pow_rek(a, b));
    return EXIT_SUCCESS;
}