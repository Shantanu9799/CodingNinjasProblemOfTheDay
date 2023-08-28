#include <bits/stdc++.h> 
vector<int> tweakTheArray(vector<int> arr, int n){
    // Write your code here.
    //calculating the total sum of the array
    int TotalSum = 0;
    for(int i : arr) {
      TotalSum += i;
    }
    //stroing the difference between the total sum and the array element
    for(int i = 0; i < n; i++) {
      arr[i] = TotalSum-arr[i];
    }
    //return the array
    return arr;
}