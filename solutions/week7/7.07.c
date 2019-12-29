#include <stdio.h>
#include <stdlib.h>

int palindrome(int a[], int l, int r)
{
    while (l < r){
        if (a[l] != a[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int lbest = 0, rbest = -1;

    for (int l = 0; l < n; l++)
        for (int r = l; r < n; r++)
            if (palindrome(a, l, r))
                if (r - l > rbest - lbest){
                    lbest = l;
                    rbest = r;
                }

    for (int i = lbest; i <= rbest; i++)
        printf("%d ", a[i]);

    return EXIT_SUCCESS;
}