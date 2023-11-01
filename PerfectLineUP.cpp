int goodSubarray(vector<int> &a)
{
    // Write your code here
    sort(a.begin(), a.end());
    int longest = 0;
    for(int i = 0; i < a.size(); i++) {
        for(int j = i+1; j < a.size(); j++) {
            if(a[j]-a[i] <= 10) {
                longest = max(longest, j-i+1);
            }
        }
    }
    return longest;
}