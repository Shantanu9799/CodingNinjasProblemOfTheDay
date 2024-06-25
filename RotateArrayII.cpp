#include <bits/stdc++.h> 

vector<int> reverse(vector<int> v, int s, int e) {
    while(s < e) {
        swap(v[s], v[e]);
        s++; e--;
    }
    return v;
}

vector<int> rotateForward(vector<int> v, int n, int r) {
    r %= n;
    v = reverse(v, 0, n-r-1);
    v = reverse(v, n-r, n-1);
    v = reverse(v, 0, n-1);
    return v;
}

vector<int> rotateBackward(vector<int> v, int n, int r) {
    r %= n;
    v = reverse(v, 0, r-1);
    v = reverse(v, r, n-1);
    v = reverse(v, 0, n-1);
    return v;
}


void rotateArrayTwo(int n, char d, int r, vector < int > & num) {
    // Write your code here.
    num = d == 'f' ? rotateForward(num, n, r) : rotateBackward(num, n, r);
}