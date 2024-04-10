#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    // Write your code here.
    vector<int> leaders;
    int maxi = elements[n-1];
    leaders.push_back(maxi);
    for(int i = n-2; i >= 0; i--) {
        if(elements[i] > maxi) {
            leaders.push_back(elements[i]);
            maxi = elements[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}