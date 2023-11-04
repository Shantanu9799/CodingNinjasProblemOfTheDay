#include <bits/stdc++.h> 
vector<int> linearProbing(vector<int> keys)
{
    // Write your code here.
    int n = keys.size();
    vector<int> hash(n, -1);
    for(int i = 0; i < n; i++) {
        int key = keys[i];
        int hashValue = keys[i]%n;
        while(hash[hashValue%n] != -1) {
            hashValue++;
        }
        hash[hashValue%n] = key;
    }
    return hash;
}
