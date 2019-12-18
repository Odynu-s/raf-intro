#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int a){
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        if(is_prime(i))
            printf("%d ", i);

    return EXIT_SUCCESS;
}