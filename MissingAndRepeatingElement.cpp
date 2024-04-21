// Simple Mathematics Approach
// -----------------------------------
#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    // sum of N natural numbers = s
	long long s = (n * (n+1)) / 2;
	// sum of square of N, natural numbers = s2
	long long s2 = (n  (n+1)  (2*n + 1)) / 6;
	// calculate the sn and sn2;
	long long sn = 0, sn2 = 0;
	for(auto it : arr) {
		sn += it;
		sn2 += (long long) (it * it);
	}
	// equation s - sn
	// x - y value
	long long val1 = s - sn;
	// equation s2 - sn2
	long long val2 = s2 - sn2;
	// x + y value
	val2 /= val1;
	// missing number x
	long long x = (val1 + val2) / 2;
	// repeating number
	long long y = x - val1;
	return {(int)x, (int)y};
}


// XOR Approach
// ------------------
#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    // first find the XOR value of the arr element and all the number from 1 to N
	int xr = 0;
	for(int i = 0; i < n; i++) {
		xr ^= arr[i];
		xr ^= (i+1);
	}
	// now, find the rightmost set bit
	int setBit = 0;
	while((xr & (1 << setBit)) == 0) setBit++;
	// now divide of all elements in two half
	// setBit th bit = 0 or 1
	int zero = 0, one = 0;
	for(int i = 0; i < n; i++) {
		// for the array element
		if((arr[i] & (1 << setBit)) == 0) zero ^= arr[i];
		else one ^= arr[i];
		// for the element between 1 to N
		if(((i+1) & (1 << setBit)) == 0) zero ^= (i+1);
		else one ^= (i+1);
	}
	// now let any of them as repeating one and find the count in the array
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == zero) count++;
	}
	// if the count is two, then for sure it's the repeating element
	// else it's the missing element
	if(count == 2)
                return {one, zero};
	else
                return {zero, one};
}