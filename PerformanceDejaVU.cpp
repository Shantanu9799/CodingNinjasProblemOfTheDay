int dejaVu(int n, vector<int> &w, int k) {
    // Write your code here.
    
    // do the sum
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += w[i];
        w[i] = sum;
    }
    int deja = INT_MAX;
    // we have to find the first index, where the sum value lies in difference of k previously
    // how ??
    for(int i = 0; i < n; i++) {
        int score = w[i];
        for(int j = i+1; j < n; j++) {
            if(abs(score - w[j]) <= k) {
                deja = min(deja, j+1);
            }
        }
    }
    if(deja != INT_MAX) return deja;
    // if we won't get it
    return -1;

}
