#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int frequency[n] = {0};
	for(int i = 0; i < n; i++) {
		if(frequency[arr[i]] == 1) return arr[i];
		frequency[arr[i]]++;
	}
	return -1;
}