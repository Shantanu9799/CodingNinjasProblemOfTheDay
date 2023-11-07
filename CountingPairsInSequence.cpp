int minimum(int n, vector<int> a) {
    int mini = INT_MAX;
    for(int i = 0; i < n; i++) {
        mini = min(mini, a[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == mini) cnt++;
    }
    return cnt;
}

int maximum(int n, vector<int> a) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, a[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == maxi) cnt++;
    }
    return cnt;
}

long long countPairs(int n, vector<int> a) {
    // Write your code here.
    if(n <= 2) return 2;
    int maxCount = maximum(n, a);
    int minCount = minimum(n, a);
    // cout << "MaxCount = " << minCount;
    long long ans = minCount * (2 * maxCount);
    if(maxCount == minCount && minCount == n) ans = n * (n-1);
    return ans;
}
