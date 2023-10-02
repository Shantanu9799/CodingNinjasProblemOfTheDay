#include <bits/stdc++.h> 
int findMinNumbers(vector<int> &arr, int sum, int maxVal) {
	// Write your code here.
	int originalSum = 0;
	for(auto it : arr) {
		originalSum += it;
	}
	sum = sum - originalSum;
	if(sum < 0) sum*=-1;
	if(sum%maxVal == 0) return sum/maxVal;
	return (sum/maxVal)+1;
}