#include <stdio.h>
#include <stdlib.h>

int main()
{
    float feet = -1;
    scanf("%f", &feet);
    float cm = feet * 30.48;
    printf("%.2f", cm);
    return 0;
}