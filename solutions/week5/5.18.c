int prostBroj(int n) {
    if (n == 1) return 1; // Someone fucked up another test, 1 is not prime.
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}