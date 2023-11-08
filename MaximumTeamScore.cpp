long long maximumAggregateCount(int n, vector<int> &a) {
    // Write your code here.
    long long sum = 0;
    for(int i : a) sum += i;
    int mini = min(a[0], a[n-1]);
    return sum - mini;
}