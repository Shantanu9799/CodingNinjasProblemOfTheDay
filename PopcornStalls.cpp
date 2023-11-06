int isAbleToPlace(int n, int k, vector<int> &a) {
    // Write your code here.
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if((i==0) && (a[i+1]==0) && (a[i]==0)) {
            a[i] = 1;
            cnt++;
        } else if((i==(n-1)) && (a[i-1] == 0) && (a[i]==0)) {
            a[i] = 1;
            cnt++;
        } else if((i>0) && (a[i+1]==0) && (a[i-1]==0) && (a[i]==0)) {
            a[i] = 1;
            cnt++;
        }
    }
    // cout << cnt << " ";
    return cnt >= k ? 1 : 0;
}
