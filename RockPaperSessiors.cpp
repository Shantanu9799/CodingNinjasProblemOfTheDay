#include <bits/stdc++.h> 
vector < int > rockPaperScissor(int k, string nezuko, string zenitsu) {
    // Write your code here.
    vector<int> WinWin(2, 0);
    int i = 0, j = 0;
    int n = nezuko.size(), z = zenitsu.size();
    while(k > 0) {
        if(nezuko[i%n] != zenitsu[j%z]) {
            if(nezuko[i%n] == 'R') {
                if(zenitsu[j%z] == 'S') {
                    WinWin[0]++;
                } else {
                    WinWin[1]++;
                }
            } else if(nezuko[i%n] == 'P') {
                if(zenitsu[j%z] == 'S') {
                    WinWin[1]++;
                } else {
                    WinWin[0]++;
                }
            } else {
                 if(zenitsu[j%z] == 'P') {
                    WinWin[0]++;
                } else {
                    WinWin[1]++;
                }
            }
        }
        i++;
        j++;
        k--;
    }
    return WinWin;
}