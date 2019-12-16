#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int low, up;
    scanf("%d%d", &low, &up);
    printf("%d", rand() % (up - low) + low);
    return 0;
}