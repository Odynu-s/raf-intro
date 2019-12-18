#include <stdio.h>
#include <stdlib.h>

int isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int a, counter = 0;
    scanf("%d", &a);

    for (int i = 1; i <= 100000; i++){
        if (isPrime(i)){
            if (counter == a){
                printf("%d", i);
                break;
            }
            counter++;
        }
    }
    return EXIT_SUCCESS;
}