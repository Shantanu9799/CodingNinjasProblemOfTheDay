#include <bits/stdc++.h> 

int binaryGap(int num) {
    int maxGap = 0;
    int gap = 0;
    bool alreadyOne = false;

    while (num) {
        if ((num & 1) == 1) {
            if (alreadyOne) {
                maxGap = max(maxGap, gap+1);
                gap = 0;
            } else {
                alreadyOne = true;
            }
        } else {
            if (alreadyOne) {
                gap++;
            }
        }
        num = num >> 1;
    }

    return maxGap;
}
