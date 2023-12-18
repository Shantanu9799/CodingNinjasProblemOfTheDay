#include <bits/stdc++.h> 
bool isEqual(string &str1, string &str2) {
    //	Write your code here. 
    stack<char> s1;
    stack<char> s2;
    for(char ch : str1) {
        if(ch != '#') s1.push(ch);
        else {
            if(!s1.empty()) s1.pop();
        }
    }

    for(char ch : str2) {
        if(ch != '#') s2.push(ch);
        else {
            if(!s2.empty()) s2.pop();
        }
    }

    if(s1.size() != s2.size()) return false;

    while(s1.size()) {
        if(s1.top() != s2.top()) return false;
        else {
            s1.pop();
            s2.pop();
        }
    }

    return true;
}