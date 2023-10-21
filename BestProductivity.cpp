long long bestWorkers(int n, int k, vector<int> &a) {
    // Write your code here.
    long long maxProductivity = INT_MIN;
    long long productivity = 0;
    for(int i = 0; i < k; i++) {
        productivity += a[i];
    }
    maxProductivity = max(maxProductivity, productivity);
    for(int i = 1; i <= a.size()-k; i++) {
        productivity = productivity + a[k+i-1] - a[i-1];
        maxProductivity = max(maxProductivity, productivity);
    }
    return maxProductivity;
}