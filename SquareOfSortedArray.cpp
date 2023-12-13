#include <bits/stdc++.h> 
vector < int > sqsorted(vector < int > & arr) {
    // Write your code here.
    vector<int> sortedArray(arr.size());
    int idx = arr.size() - 1;
    int i = 0, j = arr.size() - 1;
    while(i <= j) {
        if((arr[i] * arr[i]) > (arr[j] * arr[j])) {
            sortedArray[idx--] = arr[i] * arr[i];
            i++;
        } else {
            sortedArray[idx--] = arr[j] * arr[j];
            j--;
        }
    }
    return sortedArray;
}