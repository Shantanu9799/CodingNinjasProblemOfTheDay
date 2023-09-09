#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int totalCoverage = 0;
    int n = mat.size();
    int m = mat[0].size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] == 0) {
                int coverage = 0;
            if(i > 0 && mat[i-1][j] == 1) {
                coverage++;
            }
            if(i < n-1 && mat[i+1][j] == 1) {
                coverage++;
            }
            if(j > 0 && mat[i][j-1] == 1) {
                coverage++;
            }
            if(j < m-1 && mat[i][j+1] == 1) {
                coverage++;
            }
            totalCoverage += coverage;
            }
        }
    }
    return totalCoverage;
}