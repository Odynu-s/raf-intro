#include <stdio.h>

int main()
{
    int a1, b1, a2, b2;
    scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
    int t1 = a1 * b1 / 2;
    int t2 = a2 * b2 / 2;
    if (t1 > t2){
        printf("1");
    }else if (t1 < t2){
    printf("2");
    }else{
    printf("0");
    }
}