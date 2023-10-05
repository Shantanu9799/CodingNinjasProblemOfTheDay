#include <bits/stdc++.h> 
string stringSort(string s){
    // Write your code here.
    int character[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        character[s[i] - 'a']++;
    }
    s = "";
    for(int i = 0; i < 26; i++) {
        char ch = 'a'+i;
        int times = character[i];
        while(times-- > 0) {
            s += ch;
        }
    }
    return s;
}