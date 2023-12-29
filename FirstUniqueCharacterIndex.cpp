#include <bits/stdc++.h> 
int firstUniqueCharacter(string s , int n) {
	// Write your code here.
	unordered_map<char, int> mpp;
	for(int i = 0; i < n; i++) {
		mpp[s[i]]++;
	}
	for(int i = 0; i < n; i++) {
		if(mpp[s[i]] == 1) return i+1;
	}
	return -1;
}