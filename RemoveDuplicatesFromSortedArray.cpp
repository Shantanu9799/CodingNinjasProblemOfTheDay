int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int idx = 0, i = 0;
	while(i < n) {
		while(i < n && arr[idx] == arr[i]) {
			i++;
		}
		arr[++idx] = arr[i];
	}
	return idx;
}
