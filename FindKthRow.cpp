#include <bits/stdc++.h>
using namespace std;
int findRowK(vector<vector<int>> &mat) {
  // Write your code here
  int n = mat.size();
  int k = 0;
  while (k < n) {
    bool flag = true;
    // checking for the kth row elements are all 0 or not
    for (int i = 0; i < n; i++) {
        if(mat[k][i] != 0 && i!=k) {
            flag = false;
        }
    }
    // checking for the kth row elements are all 1 or not
    for (int i = 0; i < n; i++) {
        if(mat[i][k] != 1 && i!=k) {
            flag = false;
        }
    }
    if(flag) {
        return k;
    }
    k++;
  }
  return -1;
}