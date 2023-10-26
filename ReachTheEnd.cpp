int canYouReach(int n, vector<int> h) {
    // Write your code here.
    for(int i = 0; i < n-1; i++) {
        if(abs(h[i] - h[i+1]) > 1) return 0;
    }
    return 1;
}