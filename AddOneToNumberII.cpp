#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> arr)
{
    // Write your code here
    // if the last element of the array is 9 then it'll produce a carry of 1
    // so till the index 9 present contigously, make all 0
    int i = arr.size() - 1;
    while(i >= 0 && arr[i] == 9) {
        arr[i] = 0;
        i--;
    }
    // if i stands any index till 0, then it's for sure that there is an element present
    // which is not 9, then we've to just simpply add 1
    if(i >= 0) arr[i]+=1;
    // if the index become < 0, it means all the elements are 9
    // like {9, 9, 9}, so the final array should be like this {1, 0, 0, 0}
    // so we've to add 1 at the first position
    else arr.insert(arr.begin(), 1);
    // in question it says that there should not be any leading 0s
    // finding the last pos of leading 0s
    if(arr[0] == 0) {
        int pos = 0;
        for(int i = 0; i < arr.size(); ++i) {
            if(arr[i] == 0) pos++;
            else break;
        }
        // erase all the 0s
        arr.erase(arr.begin(), arr.begin() + pos);
    }
    // finally return the arr
    return arr;
}

