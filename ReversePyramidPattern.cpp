#include <bits/stdc++.h> 
void ninjaPuzzle(int n)
{
    // Write your code here
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int j = i; j <= n; j++) {
            cout << '*';
        }

        cout << endl;
    }
}
