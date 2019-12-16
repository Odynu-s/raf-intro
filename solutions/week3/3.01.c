#include <stdio.h>

int main()
{
    int n, temp, max = -999;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp > max)
        {
            max = temp;
        }
    }
    printf("%d", max);
    return 0;

}