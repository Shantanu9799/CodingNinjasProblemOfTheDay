#include <bits/stdc++.h>
int parityProblems(vector<int> &arr) {
    // Write your code here.
    int even = 0, odd = 0;
    for(int i = 0; i < arr.size(); i++) {
        if((arr[i] & 1) == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if((odd & 1) == 0) {
        return even+odd;
    }
    return even+odd-1;
}