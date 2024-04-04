#include <bits/stdc++.h> 
string findSum(string num1 , string num2) {
	// Write Your Code here.
	string result = "";
	int carry = 0;

	int i = num1.size()-1, j = num2.size()-1;
	while(i >= 0 || j >= 0 || carry > 0) {
		int d1 = (i >= 0) ? num1[i--] - '0' : 0;
		int d2 = (j >= 0) ? num2[j--] - '0' : 0;
		int sum = d1 + d2 + carry;
		carry = sum / 10;
		result += to_string(sum % 10);
	}
	reverse(result.begin(), result.end());
	return result;
}