#include <stdio.h>
#include <stdlib.h>

int broj_levo(int i)
{
    int sum = 1,j;
    for (j = 1 ; j < i ; j++)
        sum += j;
    return sum;
}

int broj_desno(int i, int n)
{
    return 2 * n - i + 1;
}

double f1_rek(int i, int n)
{
    if (i == n)
        return broj_levo(i);
    return broj_levo(i) + broj_desno(i,n) / f1_rek(i + 1,n);
}

double f1_ite(int n)
{
    double sum = broj_levo(n);
    int i;
    for (i = n - 1 ; i >= 1 ; i--){
        sum = broj_levo(i) + broj_desno(i,n) / sum;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%lf\n",f1_rek(1,n));
    printf("%lf",f1_ite(n));
    return 0;
}