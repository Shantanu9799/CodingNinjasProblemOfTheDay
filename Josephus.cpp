#include <bits/stdc++.h> 

int solve(int n, int k) {
    if(n == 1) return 0;
    return (solve(n-1, k)+k)%n;
}

int josephus(int n, int k)
{
    // Write your code here.
    return solve(n, k) + 1;
}