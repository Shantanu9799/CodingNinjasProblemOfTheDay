#include <bits/stdc++.h> 
bool checkBits(unsigned int n) {
    // Write your code here.
    int prevBit = (n & 1);
    n >>= 1;
    while(n > 0) {
        int currBit = (n & 1);
        if(prevBit == currBit) return false;
        prevBit = currBit;
        n >>= 1;
    }
    return true;
}