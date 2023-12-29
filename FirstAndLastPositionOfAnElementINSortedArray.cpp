#include <bits/stdc++.h> 

int firstPosition(vector<int> a, int n, int k) {
    int s = 0, e = n-1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(a[mid] >= k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return s;
}

int lastPosition(vector<int> a, int n, int k) {
    int s = 0, e = n-1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(a[mid] > k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return e;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int firstPos = firstPosition(arr, n, k);
    int lastPos = min(n-1, lastPosition(arr, n, k));

    if(arr[firstPos] == k) {
        return {firstPos, lastPos};
    }

    return {-1, -1};
}