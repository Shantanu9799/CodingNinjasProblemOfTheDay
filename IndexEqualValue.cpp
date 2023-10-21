#include <bits/stdc++.h> 
vector<int> valueEqualToIndices(vector<int>& numArray, int n) {
	// Write your code here.
	vector<int> index;
	for(int i = 0; i < n; i++) {
		if(numArray[i] == i){
			index.push_back(i);
		}
	}
	if(index.size() == 0) return {-1};
	return index;
}