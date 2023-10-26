int maximum(int n, vector<int> &a) {
    int idx = -1;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i] > maxi) {
            maxi = a[i];
            idx = i;
        }
    }
    return idx;
}

int minimum(int n, vector<int> &a) {
    int idx = -1;
    int mini = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] < mini) {
            mini = a[i];
            idx = i;
        }
    }
    return idx;
}

long long gunDevil(int n, vector<int> &a) {
    long long ans = a[maximum(n, a)];
    a.erase(a.begin() + maximum(n, a));
    while(a.size() > 1) {
        int minIdx = minimum(a.size(), a);
        ans += a[minIdx];
        a.erase(a.begin() + minIdx);
    }
    return ans;
}
