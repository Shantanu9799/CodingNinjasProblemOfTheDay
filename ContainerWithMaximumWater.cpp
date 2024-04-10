#include <bits/stdc++.h> 
int maxAreaContainer(vector<int> &arr) {
    // Write your code here.
    // taking two pointers for two ends and var consisting the maxWater
    int i = 0, j = arr.size() - 1, maxWater = INT_MIN;
    while(i < j) {
        // the water cap between two points
        int water = min(arr[i], arr[j]) * (j - i);
        // grabing the max one
        maxWater = max(maxWater, water);
        // discarding the minimum cap
        if(arr[i] > arr[j]) j--;
        else i++;
    }
    return maxWater;
}

