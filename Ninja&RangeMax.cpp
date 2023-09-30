int ninjaAndRangeMax(int n, int x, int y, vector<int> &a) {
	// Write your code here.
	int maxi = INT_MIN;
	for(int i = x; i <= y; i++) {
		maxi = max(maxi, a[i]);
	}
	return maxi;
}