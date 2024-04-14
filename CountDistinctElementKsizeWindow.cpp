#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    int n = arr.size();
    vector<int> distinctElem(n-k+1, 1);
    if(k == 1) return distinctElem;
	unordered_map<int, int> mpp;
    for(int i = 0; i < k; i++) {
        mpp[arr[i]]++;
    }
    distinctElem[0] = mpp.size();
    for(int i = 1; i <= n-k; i++) {
        mpp[arr[k + i - 1]]++;
        if(mpp[arr[i-1]] == 1) {
            mpp.erase(arr[i-1]);
        } else {
            mpp[arr[i-1]]--;
        }
        distinctElem[i] = mpp.size();
    }
    return distinctElem;
}

