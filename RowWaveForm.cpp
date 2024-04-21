#include <bits/stdc++.h> 
vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    // n = row   m = col    index is the curr index of the waveMat vector
    int n = mat.size(), m = mat[0].size(), index = 0;
    vector<int> waveMat(n * m);

    // iterate through all the rows
    for(int i = 0; i < n; i++) {
        // if the row is even, like 0, 2, 4, so on, we'll start picking element from the first 
        if((i & 1) == 0) {
            int j = 0;
            for(; j< m; j++) {
                waveMat[index++] = mat[i][j];
            }
        }
        // if the row is odd, like 1, 3, 5, so on, we'll start picking element from the last
         else {
            int j = m-1;
            for(; j >= 0; j--) {
                waveMat[index++] = mat[i][j];
            }
        }
    }

    // return the waveMat
    return waveMat;
}