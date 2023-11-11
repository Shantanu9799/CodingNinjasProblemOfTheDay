#include <bits/stdc++.h> 

int countOfDivisiblePairs(int n, int m){
	// Write your code here
	int pairs = 0;
	for(int x = 1; x <= n; x++) {
		for(int y = 1; y <= m; y++) {
			if((x+y)%5 == 0) {
				pairs++;
				// cout << x << " " << y << endl;
			}
		}
	}
	return pairs;
}