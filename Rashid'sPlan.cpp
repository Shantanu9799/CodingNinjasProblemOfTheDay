int countEvenParityDigits(string a) {
    // Write your code here.
    int cnt = 0;
    for(int i = 0; i < a.length(); i++) {
        int digit = (int) (a[i] - '0');
        if((digit & 1) == 0) cnt++;
    }
    return cnt;
}