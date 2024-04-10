#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) 
{
    // Write your code here 
    // sliding window size k
    // var consisting the currSum 
    int currSum = 0;
    // take the sum of the first k-size window
    for(int i = 0; i < k; i++) {
        currSum += arr[i];
    }
    // var consisting the minimumSum
    // consider the currSum as the minimumSum for this time
    int minimumSum = currSum;
    // check rest windows
    // i should start from 1.... 0..K(taken), now 1.. till <=(n - k)
    for(int i = 1; i <= (n-k); i++) {
        // removing the previous element .. (i-1)th element
        currSum -= arr[i-1];
        // adding the new element .. (k+i-1)th element
        currSum += (arr[k + i - 1]);
        // finding and storing the minimum one
        minimumSum = min(minimumSum, currSum);
    }
    // returning the minimumSum
    return minimumSum;
}

