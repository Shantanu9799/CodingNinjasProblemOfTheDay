#include <bits/stdc++.h> 
int maxFrequency(vector<int> A)
{
    // Write your code here.
    unordered_map<int, int> mpp;
    for(int i = 0; i < A.size(); i++) {
        mpp[A[i]]++;
    }
    map<int, int> freqMPP;
    for(auto it : mpp) {
        // cout << it.first << " " << it.second << endl;
        freqMPP[it.second]++;
    }
    int Maxbeauty = 0;
    int beauty = INT_MAX;
    for(auto it : freqMPP) {
        // cout << it.first << " " << it.second << endl;
        if(it.second > Maxbeauty) {
            Maxbeauty = it.second;
            beauty =  it.first;
        }
    }
    return beauty;
}