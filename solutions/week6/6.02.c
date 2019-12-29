#include <stdio.h>
#include <stdlib.h>

int zbir_cif_rek(int a){
    if (a < 0){
        return -1 * (zbir_cif_rek(-a));
    }
    if (a < 10)
        return a;
    return a % 10 + zbir_cif_rek(a / 10);
}

int main() {
    int a;
    scanf("%d", &a);

    printf("%d", zbir_cif_rek(a));
    return EXIT_SUCCESS;
}