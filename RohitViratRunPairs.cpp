vector<int> findPair(int x, int y) {
	// Write your code here.
	vector<int> pair;
	pair.push_back(x/2);
	pair.push_back(x - x/2);
	while(abs(pair[0] - pair[1]) <= y) {
		if(abs(pair[0] - pair[1]) == y) return pair;
		pair[0]--;
		pair[1]++;
	}
	return {-1, -1};
}