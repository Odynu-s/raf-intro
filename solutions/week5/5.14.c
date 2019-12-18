#include <stdio.h>
#include <stdlib.h>

int not(int i){
    if (i)
        return 0;
    return 1;
}

int main()
{
    int n, forwardslash = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n * n; i++){
        if (forwardslash)
            printf("/");
        else
            printf("\\");
        if (i % n == 0)
            printf("\n");
        if (i % 3 == 0)
            forwardslash = not(forwardslash);
    }
    return EXIT_SUCCESS;
}