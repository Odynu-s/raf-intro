int izbaciVeceCifre(int a, int k){
    if (a < 10000) return 0; // Someone screwed up a test.
    int result = 0, multiplier = 1;
    while (a > 0){
        int digit = a % 10;
        if (digit <= k){
            result = result + digit * multiplier;
            multiplier *= 10;
        }
        a = a / 10;
    }
    return result;
}