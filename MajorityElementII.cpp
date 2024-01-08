#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int ele1 = 0;
        int ele2 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < arr.size(); i++) {
           if(cnt1 == 0 && ele2 != arr[i]) {
               ele1 = arr[i];
               cnt1 = 1;
           } else if(cnt2 == 0 && ele1 != arr[i]) {
               ele2 = arr[i];
               cnt2 = 1;
           } else if(arr[i] == ele1) {
               cnt1++;
           } else if(arr[i] == ele2) {
               cnt2++;
           } else {
               cnt1--; cnt2--;
           }
            
        }
        vector<int> list;
        cnt1 = 0; cnt2 = 0;
        for(int i =0 ; i < arr.size(); i++) {
            if(arr[i] == ele1) {
                cnt1++;
            }
            if(arr[i] == ele2) {
                cnt2++;
            }
        }
        if(cnt1 > arr.size()/3) {
            list.push_back(ele1);
        }
        if(cnt2 > arr.size()/3) {
            list.push_back(ele2);
        }
        return list;

}