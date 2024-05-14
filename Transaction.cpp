#include <bits/stdc++.h>
long long transactions(vector<int> &money) {
    //    Write your code here
    long long maxAmount = 0, amount = 0;
    for(int i : money) {
        amount += i;
        maxAmount = max(maxAmount, amount);
    }
    return maxAmount;
}