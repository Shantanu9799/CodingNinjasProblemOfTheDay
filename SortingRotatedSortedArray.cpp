#include <bits/stdc++.h> 
using namespace std;
int rotationTime(vector<int> & arr, int n) {
    int mini = INT_MAX;
    int idx = -1;
    int s = 0, e = n-1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(arr[mid]>=arr[s] && arr[mid]>=arr[e]) {
            if(mini > arr[s]) {
                mini = arr[s];
                idx = s;
            }
            s = mid+1;
        } else {
            if(mini > arr[s]) {
                mini = arr[mid];
                idx = mid;
            }
            e = mid-1;
        }
    }
    return idx;
}

void rotate(vector<int> & arr, int n, int f, int l) {
    while(f < l) {
        arr[f] = arr[f] ^ arr[l];
        arr[l] = arr[f] ^ arr[l];
        arr[f] = arr[f] ^ arr[l];
        f++; l--;
    }
}

void sortRotatedArray(vector<int> & arr, int n) {
    // Write your code here.
    int rotT = rotationTime(arr, n);
    rotate(arr, n, 0, rotT-1);
    rotate(arr, n, rotT, n-1);
    rotate(arr, n, 0, n-1);
}