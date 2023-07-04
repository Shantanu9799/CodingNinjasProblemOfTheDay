#include <bits/stdc++.h> 
int oneIteration(vector<int> A)
{
    // Write your code here.
    int first = INT_MIN, second = INT_MIN;
    for(auto it : A) {
        if(it > first) {
            second = first;
            first = it;
        }
        if(it < first && it > second) {
            second = it;
        }
    }
    return first+second;   
}