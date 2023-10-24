int maximumSquareDivisor(int &n) {
	// Write your code here
	int low = 1, high = sqrt(n);
	for(int i = high; i >= low; i--) {
		int p = (int) pow(i, 2);
		if(n%p == 0) {
			return i;
		}
	}
	return 0;
}
