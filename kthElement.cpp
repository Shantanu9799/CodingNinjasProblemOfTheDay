#include<bits/stdc++.h>
int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // Write your code here
    if(n+m < k) {
        return -1;
    }
    vector<int> v;
    for(auto it : arr1) {
        v.emplace_back(it);
    }
    for(auto it : arr2) {
        v.emplace_back(it);
    }
    
    priority_queue<int> pq;
    for(int i = 0; i < k; i++) {
        pq.push(v[i]);
    }
    for(int i = k; i < v.size(); i++) {
        if(pq.top() > v[i]) {
            pq.pop();
            pq.push(v[i]);
        }
    }
    return pq.top();
}