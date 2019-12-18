int izbaciDeljiveCifre(int a, int k){
    int result = 0, multiplier = 1;
    while (a > 0){
        int digit = a % 10;
        if (digit % k != 0){
            result = result + digit * multiplier;
            multiplier *= 10;
        }
        a = a / 10;
    }
    return result;
}