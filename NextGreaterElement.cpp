#include <bits/stdc++.h> 
using namespace std;
vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> greater(n, 0);
    greater[n-1] = -1;
    stack<int> s;
    s.push(arr[n-1]);
    for(int i = n-2; i >= 0; i--) {
        if(s.empty()) {
            s.push(arr[i]);
            greater[i] = -1;
            continue;
        }

        if(s.top() > arr[i]) {
            greater[i] = s.top();
            s.push(arr[i]);
            continue;
        }

        while(!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        if(s.empty()) greater[i] = -1;
        else greater[i] = s.top();

        s.push(arr[i]);
    }
    return greater;
}

#include <bits/stdc++.h> 
vector<int> nextGreaterElement(vector<int>& arr, int n){
    // Write your code here.
    vector<int> element(n, -1);
    stack<int> s;
    for(int i = n-1; i>= 0; i--) {
        if(s.empty()) s.push(arr[i]);
        else if(arr[i] < s.top()) {
            element[i] = s.top();
        } else {
            while(!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }
            if(s.empty()) s.push(arr[i]);
            else element[i] = s.top();
        }
        s.push(arr[i]);
    }
    return element;
}

