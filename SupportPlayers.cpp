#include <bits/stdc++.h> 
string stringOperation(string &s, int k){
    // Write your code here
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') cnt++;
    }
    return cnt==k ? "YES" : "NO";
}