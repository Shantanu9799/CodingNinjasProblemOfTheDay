#include <bits/stdc++.h> 
int specialSum(vector<int>& arr, int n){
    // Write your code here.
    int sum = 0;
	for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if(sum%9 == 0 && sum!=0) {
        return 9;
    }
    return sum%9;
}