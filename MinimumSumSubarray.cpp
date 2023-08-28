#include <bits/stdc++.h>
int minimumSum(vector<int> &arr, int n) {
  // Write your code here.
  int minimumSum = INT_MAX;
  int currSum = 0;
  for (int i = 0; i < n; i++) {
    currSum += arr[i];
    minimumSum = min(minimumSum, currSum);
    if (currSum > 0) {
      currSum = 0;
    }
  }
  return minimumSum;
}

// Modified version of the Kaden's algorithm