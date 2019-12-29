#include <stdio.h>
#include <stdlib.h>

int sumofarray(int a[], int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++){
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int n, window;
    scanf("%d %d", &n, &window);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int b[n];

    for (int i = 0; i < n; i++){
        if (i + 1 < window)
            b[i] = a[i];
        else
            b[i] = sumofarray(a, i - window + 1, i) / window;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return EXIT_SUCCESS;
}