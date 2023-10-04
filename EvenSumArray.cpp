int makeEvenSum(int n, vector<int> &a) {
    // Write your code here.
    int evenCount = 0;
    for(int it : a) {
        if((it&1) == 0) evenCount++;
    }
    if((evenCount > 0) || ((n-evenCount)&1) == 0) return 1;
    return 0;
}