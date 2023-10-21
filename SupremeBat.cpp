int xAndY(int x, int y, vector<int> &a) {
    // Write your code here.
    int lightest = INT_MAX;
    for(int it : a) {
        if(it >= x && it <= y) {
            lightest = min(lightest, it);
        }
    }
    return lightest == INT_MAX ? -1 : lightest;
}