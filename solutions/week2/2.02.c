#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int ones, tens, hundreds, thousands;
    ones = num % 10;
    num /= 10;
    tens = num % 10;
    num /= 10;
    hundreds = num % 10;
    num /= 10;
    thousands = num;
    if(ones == thousands && tens == hundreds){
        printf("DA");
    }else{
        printf("NE");
    }
    return 0;
}