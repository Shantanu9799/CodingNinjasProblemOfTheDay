long long underwaterValves(int n, vector<int> &h) {
    // Write your code here.
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp.insert({h[i], i});
    }
    long long hours = 0;
    int first = 0;
    for(auto it : mpp) {
        int second = it.second;
        hours += abs(first - second);
        first = second;
    }
    return hours;
}
