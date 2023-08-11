#include <bits/stdc++.h> 
int maxFXVI(int n, vector<int> &arr){
    // Write your code here.
    int maxFX = INT_MIN;
    int greaterElement = n-1;
    while(greaterElement >= 0) {
        int smallerElement = greaterElement - 1;
        while(smallerElement >= 0 && arr[smallerElement] == arr[greaterElement]) {
            smallerElement--;
        }
        int fx = smallerElement + n - greaterElement;
        maxFX = max(fx, maxFX);
        greaterElement = smallerElement;
    }
    return maxFX;
}