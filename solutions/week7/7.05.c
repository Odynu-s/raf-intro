#include <stdio.h>
#include <stdlib.h>

int sumofarray(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = -999, currentmax = 0;
    for (int i = 0; i < n; i++){
        currentmax += a[i];
        if (currentmax > max)
            max = currentmax;
        if (currentmax < 0)
            currentmax = 0;
    }


    printf("%d", max);
    return EXIT_SUCCESS;
}