#include <bits/stdc++.h> 
vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    int col = mat[0].size()-1;
    vector<int> rowWave;
    for(int i = 0; i < mat.size(); i++) {
        if((i&1) == 0) {
            int j = 0;
            while(j <= col) {
                rowWave.push_back(mat[i][j++]);
            }
        } else {
            int j = col;
            while(j >= 0) {
                rowWave.push_back(mat[i][j--]);
            }
        }
    }
    return rowWave;
}
