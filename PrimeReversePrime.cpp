bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int reverse(int x) {
    int rev = 0;
    while(x != 0) {
        int rem = x%10;
        rev = (rev*10) + rem;
        x /= 10;
    }
    return rev;
}

int primeReversePrime(int l, int r) {
    // Write your code here.
    int cnt = 0;
    for(int i = l; i <= r; i++) {
        int revI = reverse(i);
        if(isPrime(i) && isPrime(revI)){
            cnt++;
            // cout << i << " || ";
        } 
    }
    return cnt;
}