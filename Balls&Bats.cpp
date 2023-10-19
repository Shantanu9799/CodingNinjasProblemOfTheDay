int ballsAndbats(int n, vector<int> &s, vector<int> &m, int x, int y) {
    // Write your code here.
    int ball = 0, bat = 0;
    for(int i = 0; i <n; i++) {
        ball += s[i];
        bat += m[i];
    }
    int ans = max(ceil((double)(x) / (double)(ball)), ceil((double)(y) / (double)(bat)));
    return ans;
}