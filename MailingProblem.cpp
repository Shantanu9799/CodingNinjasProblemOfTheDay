#include <bits/stdc++.h>
int timeTakenToMail(string keyboard, string s) {
    //    Write your code here
    unordered_map<char, int> mpp;
    for(int i = 0; i < keyboard.length(); i++) {
        mpp[keyboard[i]] = i;
    }

    int totalTime = 0;
    int i = 0;
    for(int lt = 0; lt < s.length(); lt++) {
        int j = mpp[s[lt]];
        totalTime += abs(j - i);
        i = j;
    }

    return totalTime;
}