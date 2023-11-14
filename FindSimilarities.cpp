#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here.
	set<int> s;
	int common_element = 0;
	for(int i = 0; i < n; i++) {
		s.insert(arr1[i]);
	} 
	for(int i = 0; i < m; i++) {
		auto pos = s.find(arr2[i]);
		if(pos != s.end()) common_element++;
		else s.insert(arr2[i]);
	}        
	return {common_element, s.size()};
}