void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

vector<int> reArrangeIt(int n) {
    vector<int> arr(n, 0);
    int idx = 0;
    for (int i = 1; i <= n; i++) {
        arr[idx++] = i;
    }
    reverse(arr, 0, n - 2);
    reverse(arr, 0, n - 1);
    return arr;
}
