#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

long long Power(int x, int n) {
    long long p = 1;
    if(n == 0) {
        return 1;
    }
    p = Power(x, n-1) * x;
    return p;
}

int main() {
    //Write your code here
    int x, n;
    cin >> x >> n;
    cout << Power(x, n);
    return 0;
}