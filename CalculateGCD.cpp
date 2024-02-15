int calcGCD(int n, int m){
    // Write your code here.
    if(n == 0) return m;
    if(m == 0) return n;
    
    return n > m ? calcGCD(n%m, m) : calcGCD(n, m%n);
}

