#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int n = input.length();
    int maxLength = 0;
    unordered_set<char> charSet;

    int left = 0, right = 0;

    while (right < n) {
        if (charSet.find(input[right]) == charSet.end()) {
            // If the character is not in the set, add it and update maxLength
            charSet.insert(input[right]);
            maxLength = max(maxLength, right - left + 1);
            right++;
        } else {
            // If the character is already in the set, remove the leftmost character
            charSet.erase(input[left]);
            left++;
        }
    }

    return maxLength;
}