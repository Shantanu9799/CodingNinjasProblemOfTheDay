#include <bits/stdc++.h> 
bool ninjaGram(string &str)
{
    // Write your code here
    if(str.length() < 26) return false;
    int ch[26] = {0};
    for(int i = 0; i < str.length(); i++) {
        ch[tolower(str[i])-'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(ch[i] == 0) return false;
    }
    return true;
}
