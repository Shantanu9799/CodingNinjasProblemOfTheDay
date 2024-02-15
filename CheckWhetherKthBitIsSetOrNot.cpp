bool isKthBitSet(int n, int k)
{
    // Write your code here.
    while(k != 1) {
        n = n >> 1;
        k--;
    }

    return n&1;
}