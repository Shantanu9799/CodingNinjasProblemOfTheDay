#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> arr)
{
    // Write your code here
    int n = arr.size();
    int carry = 0;
    if(arr[n - 1] == 9) {
        int i = n-1;
        while(i>=0 && arr[i] == 9) {
            arr[i] = 0;
            i--;
        }
        if(i < 0) {
            arr.insert(arr.begin(), 1);
        } else arr[i] += 1;
    } else arr[n-1] += 1;
    
    if(arr[0] == 0) {
        int i = 0;
        while(i < n && arr[i] == 0) {
            i++;
        }
        arr.erase(arr.begin() + 0, arr.begin() + i);
    }

    return arr;

}