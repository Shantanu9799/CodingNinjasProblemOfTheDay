void reverse(int n, vector<int> &a, int start, int end) {
    while(start < end) {
        a[start] = a[start] ^ a[end];
        a[end] = a[start] ^ a[end];
        a[start] = a[start] ^ a[end];
        start++;
        end--;
    }
}


void rotate(int n, vector<int> &a, int times) {
    reverse(n, a, 0, n-1-times);
    reverse(n, a, n-times, n-1);
    reverse(n, a, 0, n-1);
}


long long cyclicBeauty(int n, vector<int> &a) {
    // Write your code here.
    int times = 0;
    long long maxi = INT_MIN;
    while(times < n) {
        long long curProf = 0;
        for(int i = 1; i < n; i++) {
            curProf += abs(a[i]-a[i-1]);
        }
        maxi = max(maxi, curProf);
        times++;
        rotate(n, a, 1);  
    }
    return maxi;
}
