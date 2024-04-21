/ sliding window technique
// k size window sum

// Kaden's Algorithm

// Time Complexity - O(n)

// Space Complexity - O(1)

#include<bits/stdc++.h>
using namespace std;

// int maximumSumSubArrayKsizedWindow(vector<int> &arr, int n, int k) {
// 	int maxSum = INT_MIN, currSum = 0;
// 	// find the sum of first k-size window
// 	for(int i = 0; i < k; i++) {
// 		currSum += arr[i];
// 	}
// 	// conside the currSum as maxSum
// 	maxSum = currSum;
// 	// now find for every window
// 	for(int i = 1; i <= n-k; i++) {
// 		// we have to the i+k-1th element and we have to remove the i-1th element
// 		currSum +=(arr[i+k-1] - arr[i-1]);
// 		// find the maximum one
// 		maxSum = max(maxSum, currSum);
// 	}
// 	return maxSum;
// }

int maximumSumSubArray(vector<int> &arr, int n) {
	int maxSum = INT_MIN, currSum = 0;
	for(int i = 0; i < n; i++) {
		currSum += arr[i];
		maxSum = max(maxSum, currSum);
		if(currSum < 0) currSum = 0;
	}
	return maxSum;
}

int main() {
	// Write your code here
	// int n, k;
	// cin >> n >> k;
	int n;
	cin >> n;
	vector<int> arr(n)
;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << maximumSumSubArray(arr, n);
	// cout << maximumSumSubArrayKsizedWindow(arr, n, k);
}