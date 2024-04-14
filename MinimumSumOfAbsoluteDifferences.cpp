#include <bits/stdc++.h> 
int minimumSum(vector<int>& arr1, vector<int>& arr2, int n)
{
    // Write your code here.
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int absDiff = 0;
    for(int i = 0; i < n; i++) {
        absDiff += abs(arr1[i] - arr2[i]);
    }
    return absDiff;
}

