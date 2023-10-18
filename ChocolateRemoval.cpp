long long totalChocolates(int n, vector<int> a) {
    // Write your code here.
    long long choco = 0;
    for(int i = 0; i < a.size(); i++) {
        choco += max(0, a[i]-23);
    }
    return choco;
}
