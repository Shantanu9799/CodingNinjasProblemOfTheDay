#include <bits/stdc++.h> 
void reverse(vector<int>& arr, int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    reverse(arr, 1, n-1);
    reverse(arr, 0, n-1);
    return arr;
}
