int findTheLarger(int n, vector<int> &v) {
    // Write your code here.

    // find the larger element index
    int maxEle = INT_MIN, maxIdx = -1;
    for(int i = 0; i < n; ++i) {
        if(v[i] > maxEle) {
            maxEle = v[i];
            maxIdx = i;
        }
    }

    // find the sum of asc and dec part;
    int i = maxIdx, j = maxIdx, ascSum = 0, decSum = 0;
    while(i>=0 || j < n) {
        if(i >= 0) {
            ascSum += v[i];
            i--;
        }

        if(j < n) {
            decSum += v[j];
            j++;
        }
    }

    // if(ascSum == decSum) return -1;

    // return ascSum > decSum ? 0 : 1;

    return ascSum == decSum ? -1 : ascSum > decSum ? 0 : 1;
}