//
// Created by Marko Edelman on 10/17/19.
//

#include <stdlib.h>
#include <stdio.h>

int main(void){

    char c, temp;

    while ((c = getchar()) != EOF){
        if (c == '('){
            temp = 1;
            while (temp)
                if ((c = getchar()) == ')')
                    temp = 0;
        }else{
            putchar(c);
        }
    }

    return EXIT_SUCCESS;

}