#include <bits/stdc++.h> 
int fishEater(vector<int> &fishes) {
    // Write your code here.
    int n = fishes.size();
    stack<int> s;
    for(int i = n-1; i >= 0; i--) {
       if(s.empty()) {
           s.push(fishes[i]);
       } else {
           while(!s.empty() && fishes[i] > s.top()) {
               s.pop();
           }
           s.push(fishes[i]);
       }
    }
    return s.size();
}