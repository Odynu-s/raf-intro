#include <stdio.h>
#include <stdlib.h>

int helper(int num, int k)
{
    while(num % k == 0)
        num /= k;
    return num;
}

int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 1 ; i <= n ; i++){
        if (helper(helper(helper(i,2),3),5) == 1){
            printf("%d ",i);
        }
    }
    return EXIT_SUCCESS;
}