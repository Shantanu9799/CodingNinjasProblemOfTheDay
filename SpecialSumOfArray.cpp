#include <bits/stdc++.h> 
int specialSum(vector<int>& arr, int n){
    // Write your code here.
    // calculate the total sum
    int totalSum = 0;
    for(auto it : arr) totalSum += it;
    // we have to return the one digit sum
    // if the sum is 0, the return 0
    if(totalSum == 0) return 0;
    // which will be always between 0 - 9
    // we can take %9, totalSum = 0 case already considered
    // if the %9 == 0, then it's obvious the one digit sum is 0, so if it's 0 return 0,
    // else return the % value
    return (totalSum%9 == 0) ? 9 : totalSum%9;
}