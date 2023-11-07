int removeBulbs(vector<int> &a) {
	// Write your code here.
	int n = a.size();
	int cnt = 0;
	int i = 0;
	while( i < n) {
		if((a[i] == 0) && (i > 0) && (i < (n-1)) && (a[i-1] == 1)) {
			int j = i+1;
			while((j < n) && (a[j] == 0)) j++;
			if(j < n) cnt += (j - i);
			i = j;
		} else {
			i++;
		}
	}
	return cnt;
}