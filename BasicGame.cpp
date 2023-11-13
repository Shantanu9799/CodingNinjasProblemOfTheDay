#include <bits/stdc++.h> 

int basicGame(int &n, int &k, vector<int> &a)
{

  // Write your code here
  sort(a.begin(), a.end());
  int cnt = 0;
  for(int i = 1; i < n; i++) {
    if(a[i]-a[i-1] <= k) cnt++;
  }
  return cnt;
}