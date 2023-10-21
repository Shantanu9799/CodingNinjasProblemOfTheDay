#include <bits/stdc++.h> 
int floorSearch(vector<int> & arr, int X, int N)
{
    // Write your code here.
    int s = 0, e = N-1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(arr[mid] <= X) s = mid+1;
        else e = mid-1;
    }
    if(e < 0) return -1;
    return arr[e];
}