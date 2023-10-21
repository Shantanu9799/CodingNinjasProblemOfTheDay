#include <bits/stdc++.h> 
int findTheLargestElement(vector<int> &arr, int n) {
	// Write your code here.
	int maxi = INT_MIN;
	int s = 0, e = n-1;
	while(s <= e) {
		int mid = s + (e-s)/2;
		if((arr[s]<=arr[mid]) && (arr[mid]>arr[e])) {
			maxi = max(maxi, arr[mid]);
			s = mid + 1;
		} else {
			maxi = max(maxi, arr[e]);
			e = mid - 1;
		}
	}
	return maxi;
}