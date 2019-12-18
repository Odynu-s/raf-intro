#include <stdlib.h>
#include <stdio.h>

int forms_triangle(int a, int b, int c){
    if (a + b < c)
        return 0;
    else if (a + c < b)
        return 0;
    else if (b + c < a)
        return 0;
    return 1;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (forms_triangle(a, b, c))
        printf("moze");
    else
        printf("ne moze");
    return EXIT_SUCCESS;
}