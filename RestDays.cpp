string ninjaWantsHoliday(int n, int K, vector<int> &a) {
	// Write your code here.
	sort(a.begin(), a.end());
	string ans = "NO";
	int i = 0;
	while(i <= n-K) {
		int j = i+K;
		int cnt = 0;
		for(int k = i; k < j-1; k++) {
			cnt += a[k+1] - a[k];
		}
		if(cnt == K-1) ans = "YES";
		i++;
	}
	return ans;
}