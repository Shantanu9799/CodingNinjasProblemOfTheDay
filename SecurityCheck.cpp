int planetMisery(int n, int m){
    // Write your code here
    return (m==n) ? n+m : (min(n, m) * 2) + 1;
}