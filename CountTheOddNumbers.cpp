#include <bits/stdc++.h> 
int countOddNumbers(int low , int high)
{
	// Write your code here.
	if((low&1) == 1 || (high&1) == 1) {
		return (high-low)/2 + 1;
	}
	return (high-low)/2;
}