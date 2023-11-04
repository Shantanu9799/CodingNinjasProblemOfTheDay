#include <bits/stdc++.h> 
int simpleString(string s){
    // Write your code here
    int trainingSessions = 0;
    for(int i = 0; i < s.length()-1; i++) {
        if(s[i] == s[i+1]) {
            trainingSessions++;
            i++;
        }
    }
    return trainingSessions;
}