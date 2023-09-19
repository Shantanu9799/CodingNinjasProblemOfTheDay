#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int k = 1 + static_cast<int>(log10(num)); // counting the number of digits in the nymber
    int tmp = num;
    int amNum = 0;
    while(tmp > 0) {
        int lastDigit = tmp % 10;
        amNum += (int) pow(lastDigit, k); // calculate the  kth power of every digit
        tmp /= 10;
    }
    return num==amNum;
}