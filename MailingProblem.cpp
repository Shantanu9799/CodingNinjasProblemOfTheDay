int timeTakenToMail(string keyboard, string s) {
    //    Write your code here
    int keyboardIndex[26] = {0};
    // storing the index of keyboard character
    for(int i = 0; i < keyboard.size(); ++i) {
        keyboardIndex[keyboard[i] - 'a'] = i;
    }
    // we have to start from the 0th index
    int idx = 0, time = 0;
    for(int i = 0; i < s.size(); ++i) {
        time += abs(keyboardIndex[s[i] - 'a'] - idx);
        idx = keyboardIndex[s[i] - 'a'];
    }
    return time;
}


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