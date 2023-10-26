int findNumberOfWays(int n, int a, int b, vector<int> coins) {
    // Write your code here.
    sort(coins.begin(), coins.end());
    return coins[a]-coins[a-1];
}