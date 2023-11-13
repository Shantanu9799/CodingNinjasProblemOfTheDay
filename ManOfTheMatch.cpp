int happyPlayers(vector<int> &balls) {
    // Write your code here.
    unordered_map<int, int> mpp;
    for(int it : balls) mpp[it]++;
    int maxi = -1;
    for(auto it : mpp) {
        if(it.second >= 2) {
            maxi = max(maxi, it.first);
        }
    }
    return maxi;
}