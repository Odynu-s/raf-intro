#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double my_round(double a, int precision){
    return floor(a * pow(10, precision)) / pow(10, precision);
}

int main(){
    double a;
    int precision;

    scanf("%lf %d", &a, &precision);
    printf("%lf\n", my_round(a, precision));
    return EXIT_SUCCESS;
}