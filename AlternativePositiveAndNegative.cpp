#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size(), i = 0, j = 0;
    vector<int> pos(n/2);
    vector<int> neg(n/2);
    for(int k = 0; k < n; k++) {
        if(arr[k] < 0) neg[j++] = arr[k];
        else pos[i++] = arr[k];
    }
    i = 0; j = 0;
    for(int k = 0; k < n; k++) {
        if((k&1) == 0) arr[k] = pos[i++];
        else arr[k] = neg[j++];
    }
} 