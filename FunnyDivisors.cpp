#include <bits/stdc++.h> 
int findSum(int n, vector<int>& arr) {
    // Write your code here
    // var consisting the divisors sum
    int sumOfDivisor = 0;
    for(auto it : arr) {
        // check if the elements divisible by 2 or 3, and add them 
        if((it%2 == 0) || (it%3 == 0)) sumOfDivisor += it;
    }
    return sumOfDivisor;
}
15