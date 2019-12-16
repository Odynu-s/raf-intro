#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d", &num);
    int ones, tens, hundreds;
    ones = num % 10;
    tens = (num % 100) / 10;
    hundreds = num / 100;
    if (num == pow(ones, 3) + pow(tens, 3) + pow(hundreds, 3)){
        printf("DA");
    }else{
        printf("NE");
    }
    return 0;
}