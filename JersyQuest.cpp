int minDifference(vector<int> &arr) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int i = 0, j = 1;
    int mini = INT_MAX;
    while(j < arr.size()) {
        mini = min(mini, arr[j]-arr[i]);
        i++;j++;
    }
    return mini;
}