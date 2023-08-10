#include<bits/stdc++.h>
using namespace std;
int main() {
	// Write your code here
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long ans = 0;
	for(int i = 0; i < n; i++) {
		int element = a[i];
		int base = element / 10;
		int exponent = element % 10;
		ans += (long)pow(base, exponent);
	}
	cout << ans << endl;
	return 0;
}