#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int change = 1;
    while (change){
        change = 0;
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                change = 1;
            }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return EXIT_SUCCESS;
}