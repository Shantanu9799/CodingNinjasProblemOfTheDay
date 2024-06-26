#include <bits/stdc++.h> 
void moveZerosToLeft(int *arr, int n) 
{
    // Write your code here
    int j = n-1;
    for(int i = n-1; i >= 0; --i) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j--;
        } 
    }
}
