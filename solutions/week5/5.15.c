#include <stdio.h>
#include <stdlib.h>

int min(int a, int b){
    return a < b ? a : b;
}

int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){

            if (j <= n/2)
                printf("%d",min(min(i,j),min(n-i+1,n-j+1)));
            else
                printf("%d",min(i,n-i+1));
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}