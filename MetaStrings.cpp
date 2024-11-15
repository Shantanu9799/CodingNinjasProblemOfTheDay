#include <bits/stdc++.h> 
bool checkMeta(string &str1, string &str2)
{
    // Write your code here.
    int n = str1.size();
    int idx1 = -1, idx2 = -1;
    for(int i = 0; i < n; ++i) {
        if(str1[i] != str2[i]) {
            if(idx1 == -1) {
                idx1 = i;
            } else if(idx2 == -1) {
                idx2 = i;
            } else {
                return false;
            }
        }
    }
    if(idx1 == -1 || idx2 == -1) return false;
    swap(str2[idx1], str2[idx2]);
    return str1 == str2;
}
