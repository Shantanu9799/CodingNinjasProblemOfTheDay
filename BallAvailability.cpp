int productionHouse(int n, int m, vector<int> &days, vector<int>& needs) {
    // Write your code here.
    map<int, int> mpp;
    int maxDays = INT_MIN;
    for(int i = 0; i < m; i++) {
        mpp.insert({ days[i], needs[i] });
        maxDays = max(maxDays, days[i]);
    }
    int totalBall = 0;
    for(int i = 1; i <= maxDays; i++) {
        auto it = mpp.find(i);
        if(it != mpp.end()) {
            totalBall = (totalBall + n - it->second);
            if(totalBall < 0) return 0;
        } else {
            totalBall += n;
        }
    }
    return 1;
}