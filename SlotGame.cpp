#include <bits/stdc++.h> 
int slotScore(string &original, string &guess)
{
    int score = 0;

    unordered_map<char, int> mpp;
    for (char ch : original) {
        mpp[ch]++;
    }

    for (int i = 0; i < guess.length(); i++) {
        if (original[i] == guess[i]) {
            score += 2;
			mpp[original[i]]--;
			guess[i] = '#';
        } 
    }

	for (int i = 0; i < guess.length(); i++) {
        auto it = mpp.find(guess[i]);
        if (it != mpp.end() && it->second >= 1) {
            score += 1;
        }

        if (it != mpp.end() && it->second >= 1) {
            mpp[guess[i]]--;
        }
    }

    return score;
}