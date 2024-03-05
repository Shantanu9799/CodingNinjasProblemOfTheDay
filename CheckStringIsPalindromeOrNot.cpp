#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    string newS;
    for(int i = 0; i < s.size(); i++) {
        if((s[i]>=65 && s[i]<=91) || (s[i]>=97 && s[i]<=122)) {
            newS += tolower(s[i]);
        } else if(s[i]-'0'>=0 && s[i]-'0'<=9) {
            newS += s[i];
        }
    }
    // cout << newS << endl;
    int i = 0, j = newS.size() - 1;
    while(i < j) {
        if(newS[i] != newS[j]) return false;
        i++; j--;
    }
    return true;
}