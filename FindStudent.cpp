#include <bits/stdc++.h>
int findPos(int N, int K, int H, vector<int> &A) {
  // Write your code here.
  for (int i = 0; i < N; i++) {
    if (A[i] == H) {
      return i;
    }
  }
  return -1;
}