#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[1000];

    for (int i = 0; i < 1000; i++)
        a[i] = 0;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        a[temp]++;
    }

    int max = -999, result;
    for (int i = 0; i < 1000; i++){
        if (max < a[i]){
            max = a[i];
            result = i;
        }
    }

    printf("%d %d", result, max);

    return EXIT_SUCCESS;
}