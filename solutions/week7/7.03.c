#include <stdio.h>
#include <stdlib.h>

void printarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return;
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int evens = 0, odds = 0;

    for(int i = 0; i < n; i++){
        if (a[i] % 2 == 0)
            evens++;
        else
            odds++;
    }

    int b[evens], c[odds];
    int evencounter = 0, oddcounter = 0;

    for(int i = 0; i < n; i++){
        if (a[i] % 2 == 0)
            b[evencounter++] = a[i];
        else
            c[oddcounter++] = a[i];
    }

    printarray(b, evencounter);
    printf("\n");
    printarray(c, oddcounter);

    return EXIT_SUCCESS;
}