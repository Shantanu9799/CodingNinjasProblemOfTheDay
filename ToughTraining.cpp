int termAP(int a, int d, int n) {
    return a + ((n-1) * d);
}

int checkSequence(int a, int d, int x) {
    // Write your code here.
    if((a > x) && (d >= 0)) return 0;
    if((a < x) && (d <= 0)) return 0;
    if(a==x) return 1;
    int low = 0, high = x;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(termAP(a, d, mid)) return 1;
    }
    return 0;
}
