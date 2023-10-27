int maxi(vector<int> &a, int s, int e) {
    int m = INT_MIN;
    for(int i = s; i <= e; i++) {
        m = max(m, a[i]);
    }
    return m;
}

int mini(vector<int> &a, int s, int e) {
    int m = INT_MAX;
    for(int i = s; i <= e; i++) {
        m = min(m, a[i]);
    }
    return m;
}

int maxSum(vector<int> &a)
{
    // Write your code here
    int ans = INT_MIN;
    for(int i = 0; i < a.size()-1; i++) {
        for(int j = i+1; j < a.size(); j++) {
            ans = max(ans, maxi(a, i, j)+mini(a, i, j));
        }
    }
    return ans;
}