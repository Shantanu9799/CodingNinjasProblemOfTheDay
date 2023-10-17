#include <bits/stdc++.h> 
vector<int> reconstructArray(vector<int> &arr, int n) 
{
  // Write your code here.
  vector<int> a;
  for(int i = 0; i < n-1; i++) {
    a.push_back(arr[i] ^ arr[i+1]);
  }
  a.push_back(arr[n-1]);
  return a;
}
