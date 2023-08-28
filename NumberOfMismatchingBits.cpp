#include <bits/stdc++.h> 
int numberOfMismatchingBits(int first, int second)
{
	//	Write your code here.
	int mismatchBits = 0;
	while(first > 0 || second > 0) {
		if((first&1) != (second&1)) {
			mismatchBits++;
		}
		first = first >> 1;
		second = second >> 1;
	}
	return mismatchBits;
}