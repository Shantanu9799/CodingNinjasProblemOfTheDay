#include<bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> smallerElement(n, 0);

    stack<int> s;

    smallerElement[n-1] = -1;
    s.push(arr[n-1]);

    for(int i = n-2; i >= 0; i--) {
        if(s.empty()) {
            smallerElement[i] = -1;
        }

        if(!s.empty() && s.top() < arr[i]) {
            smallerElement[i] = s.top();
        }

        if(!s.empty() && s.top() >= arr[i]) {
            while(!s.empty() && s.top() >= arr[i]) {
                s.pop();
            }
            if(s.empty()) {
                smallerElement[i] = -1;
            } else {
                smallerElement[i] = s.top();

            }
        }               
        s.push(arr[i]);
    }

    return smallerElement;
}