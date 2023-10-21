int nines(int n, vector<int> &a, int k) {
    // Write your code here.
    int nines = 0;
    for(int it : a) {
        if(it == 9) nines++;
    }
    return nines>=k ? 1 : 0;
}