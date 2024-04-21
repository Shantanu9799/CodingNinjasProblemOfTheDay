// BS using ans variable
int floorSqrt(int n)
{
    // Write your code here.
    int sq = 0;
    int s = 0, e = n;
    while(s <= e) {
        int mid = s + (e-s) / 2;
        // if we found the perfect square, then brak out
        long long square = mid * mid;
        if(square == n) {
            sq = mid;
            break;
        }
        // if mid*mid < n, it  might be my answer
        // store it in sq and find the more closest one
        else if(square < n) {
            sq = mid;
            s = mid + 1;
        } 
        // else element the right half
        else e = mid - 1;
    }
    return sq;
}


// BS without using ans variable
int floorSqrt(int n)
{
    // Write your code here.
    int s = 0, e = n;
    while(s <= e) {
        long long mid = s + (e-s) / 2;
        // if we found the perfect square, then brak out
        long long square = mid * mid;
        if(square <= n) s = mid + 1;
        else e = mid - 1;
    }
    return e;
}

