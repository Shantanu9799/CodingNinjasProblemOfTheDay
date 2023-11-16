#include <bits/stdc++.h> 

vector<int> getPalindromes(int n) {
    vector<int> pal;
    
    if (n < 10) {
        for (int i = 1; i <= n; ++i) {
            pal.push_back(i);
        }
        return pal;
    }

    pal = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 10; i <= n; ++i) {
        int num = i;
        int revNum = 0;
        int origNum = i;

        while (num > 0) {
            revNum = (revNum * 10) + (num % 10);
            num /= 10;
        }

        if (origNum == revNum) {
            pal.push_back(origNum);
        }
    }

    return pal;
}

