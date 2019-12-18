#include <stdio.h>
#include <stdlib.h>

int isPerfect(int n){
    int sum = 0;
    for (int i = 1; i <= n / 2; i++){
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    if (isPerfect(i))
        printf("%d ", i);
    return EXIT_SUCCESS;
}