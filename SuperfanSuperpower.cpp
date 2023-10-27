int minimumOperations(int x, int y) {
    // Write your code here.
    int cnt = 0;
    if(x == y) return 2;
    if(y==1) {
        y += 2;
        cnt += 2;
    }
    while(x > 0) {
        x /= y;
        cnt++;
    }
    return cnt;
}
