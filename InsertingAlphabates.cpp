#include <bits/stdc++.h> 
vector<vector<char>> interestingPattern(int n)
{
    // Write your code here
    vector<vector<char>> Pattern;
    for(int i = 0; i < n; i++) {
        vector<char> p;
        for(int j = 0; j <= i; j++) {
            p.push_back('A' + n + j - i - 1);
        }
        Pattern.push_back(p);
    }
    return Pattern;
}