#include <bits/stdc++.h> 
int maximumPoints(int n, vector<vector<int>> &grid)
{
    // Write your code here.
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i+j == n-1) || (i == j)) sum += grid[i][j];
        }
    }
    return sum;
}