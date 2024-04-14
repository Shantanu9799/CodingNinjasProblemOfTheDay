#include <bits/stdc++.h> 
int missingNumber(vector<int> &arr, int n) 
{
    // Write your code here.
    int d = (arr[n-1] - arr[0]) / n;
    int s = 0, e = n-1, first = arr[0];
    while(s <= e) {
        int mid = s + (e-s)/2;
        int midElement = first + (mid * d);
        if(midElement >= arr[mid]) s = mid + 1;
        else e = mid - 1;
    }
    return first + (s * d);
}