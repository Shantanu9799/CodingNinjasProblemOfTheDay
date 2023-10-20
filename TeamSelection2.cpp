int maxDifference(int m, vector<int> &a){
    // Write your code here
    int n = a.size();
    sort(a.begin(), a.end());
    int start = 0, end = 0;
    for(int i = 0; i < m; i++) {
        start += a[i];
        end += a[n-i-1];
    }
    return end-start;
}