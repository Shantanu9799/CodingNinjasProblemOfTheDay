#include<iostream>
using namespace std;

int reverseNumber(int N) {
	int rev = 0;
	while(N) {
		rev = (rev * 10) + (N % 10);
		N /= 10;
	}
	return rev;
}

int main() {
	// Write your code here
	int N;
	cin >> N;
	cout << reverseNumber(N);
}
