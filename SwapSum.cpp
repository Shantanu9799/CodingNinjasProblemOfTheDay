int swapSum(int k, vector<int> &a, vector<int> &b)
{
    // Write your code here
    int sum = 0;
    for(int it : a) sum += it;
    for(int i = 0; i < b.size(); i++) {
        b[i] = b[i]-a[i];
    }
    sort(b.begin(), b.end());
    for(int i = b.size()-1; i >= (b.size()-k); i--) {
        if(b[i] <= 0) return sum;
        else sum += b[i];
    }
    return sum;
}