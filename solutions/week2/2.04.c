#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int low, up, k;
    scanf("%d%d%d", &low, &up, &k);

    int nlow, nup, temp;
    nlow = low + (k - low%k);
    nup = up - up%k;
    temp = (nup - nlow) / k;

    int r = rand() % (temp - 1) + 1;
    printf("%d", k * r);
    return 0;
}