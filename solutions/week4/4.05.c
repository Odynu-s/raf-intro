//
// Created by Marko Edelman on 10/17/19.
//

#include <stdlib.h>
#include <stdio.h>

int main(void){
    char c;
    int sum = 0, temp = 0;
    int expt = 1;

    while ((c = getchar()) != EOF){

        if (c >= '0' && c <= '9'){
            temp += expt * (c - '0');
            expt *= 10;
        }else {
            sum += temp;
            expt = 1;
            temp = 0;
        }
    }
    sum += temp;

    printf("%d", sum);
    return EXIT_SUCCESS;
}