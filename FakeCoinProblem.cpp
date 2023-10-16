int FakeCoin(vector<int> &sum){
	// Write your code here.	
	int prev= 0;
	for(int i = 0; i < sum.size(); i++) {
		int setPrev = sum[i];
		sum[i] = sum[i] - prev;
		prev = setPrev;
		if(sum[i] == 0) return i;
	}
	return -1;
}