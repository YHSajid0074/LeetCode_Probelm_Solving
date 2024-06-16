int arrangeCoins(int n) {
    long long left = 0, right = n;
    long long k, current;
    
    while (left <= right) {
        k = left + (right - left) / 2;
        current = k * (k + 1) / 2;
        
        if (current == n) {
            return k;
        }
        if (current < n) {
            left = k + 1;
        } else {
            right = k - 1;
        }
    }
    
    return right;
}
