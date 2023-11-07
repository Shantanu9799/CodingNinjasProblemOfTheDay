#include <bits/stdc++.h> 

// size for each time
int len(int n, vector<int> v) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += v[i];
	}
	return sum;
}

// maximum of all Queryes to determine the size of the vector for finding the answer
int maxQuery(int q, vector<int> query) {
	int maxi = INT_MIN;
	for(int i = 0; i < q; i++) {
		maxi = max(maxi, query[i]);
	}
	return maxi;
}

// set all the bowleres at the correct position 1 to N
vector<int> OnetoN(int n, vector<int> v) {
	vector<int> bow(len(n, v), 0);
	int index = 0;
	int range = 0;
	for(int i = 0; i < n; i++) {
		range += v[i];
		while(index < range) {
			bow[index++] = i+1;
		}
	}
	return bow;
}

// set all the bowleres at the correct position N to 1
vector<int> NtoOne(int n, vector<int> v) {
	vector<int> bow(len(n, v), 0);
	int index = 0;
	int range = 0;
	for(int i = n-1; i >= 0; i--) {
		range += v[i];
		while(index < range) {
			bow[index++] = i+1;
		}
	}
	return bow;
}

vector<int> whichBowler(int n, vector<int> v, int q, vector<int> query) {
	// Write your code here.
	int maxQ = maxQuery(q, query);
	// all the bowlers placement
	vector<int> bowler(maxQ+1, 0);
	int index = 0;
	int turns = 1;
	while(bowler[maxQ] == 0) {
		if((turns & 1) == 1) {
			vector<int> bow = OnetoN(n, v);
			int i = 0;
			while(i < bow.size() && index <= maxQ) {
				bowler[index++] = bow[i++];
			}
		} else {
			vector<int> bow = NtoOne(n, v);
			int i = 0;
			while(i < bow.size() && index <= maxQ) {
				bowler[index++] = bow[i++];
			}
		}
		turns++;
	}
	/*
	for(int i = 0; i <= maxQ; i++) {
		cout << bowler[i] << " ";
	}
	cout << endl;
	*/
	vector<int> ans;
	for(int i = 0; i < q; i++) {
		ans.push_back(bowler[query[i]]);
	}
	return ans;
}