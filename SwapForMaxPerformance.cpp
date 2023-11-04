int maxEle(vector<int> &a) {
    int maxi = INT_MIN;
    for(int it : a) maxi = max(maxi, it);
    return maxi;
}
int secMaxEle(vector<int> &a) {
    int maxi = INT_MIN, secondMaxi = INT_MIN;
    for(int it : a) {
        if(it > maxi) {
            secondMaxi = maxi;
            maxi = it;
        } else if(it <= maxi && secondMaxi < it) {
            secondMaxi = it;
        }
    }
    return secondMaxi;
}
int maxSwap(vector<int> &a){
    // Write your code here
    int maxi = maxEle(a);
    int secondMaxi = secMaxEle(a);
    if((maxi==a[a.size()-1]) || (maxi == a[0])) {
        return maxi+secondMaxi;
    }
    return max(maxi+a[0], maxi+a[a.size()-1]);
}