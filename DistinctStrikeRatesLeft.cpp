#include <bits/stdc++.h> 
int distinctLeft(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(), arr.end());
	set<int> s;
	for(int i = 0; i < n-k; i++) s.insert(arr[i]);
	return s.size();
}