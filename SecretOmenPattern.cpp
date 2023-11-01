int secretCode(int n, vector<int> &a) {
    // Write your code here.
    int sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += a[i];
    }
    if(sum%10 == 0) return 1;
    for(int i = 1; i <= n-3; i++) {
        sum = sum + a[3+i-1] - a[i-1];
        if(sum%10 == 0) return 1;
    }
    return 0;
}
