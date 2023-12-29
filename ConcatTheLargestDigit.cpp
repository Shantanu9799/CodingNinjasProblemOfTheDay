#include <bits/stdc++.h> 
int maxDigit(int a) {
    int maxi = INT_MIN;
    while(a) {
        maxi = max(maxi, a%10);
        a /= 10;
    }
    return maxi;
}

int concatLargestDigit(int a, int b, int c) {
    // Write your code here
    return 100*maxDigit(a) + 10*maxDigit(b) + maxDigit(c);
}