#include <bits/stdc++.h> 
bool checkPalindrome(long long N)
{
	// Write your code here.
	string binaryRep = "";

	while(N) {
		binaryRep += to_string(N&1);
		N = N >> 1;
	}

	int i = 0, j = binaryRep.size()-1;
	while(i < j) {
		if(binaryRep[i] != binaryRep[j]) return false;
		i++; j--;
	}

	return true;

}