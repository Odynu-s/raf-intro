#include <stdio.h>
#include <stdlib.h>

int* leftrotation(int a[], int n){
    int first = a[0];
    for (int i = 0; i < n; i++)
        a[i] = a[i + 1];
    a[n-1] = first;
    return a;
}

int main()
{
    int n, numofrotations;
    scanf("%d %d", &n, &numofrotations);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int *pa = a;
    for (int i = 0; i < numofrotations; i++)
        pa = leftrotation(pa, n);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return EXIT_SUCCESS;
}