class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxFreq = 0, cnt = 0;
        for(auto it : nums) {
            mpp[it]++;
            maxFreq = max(maxFreq, mpp[it]);
        }
        for(auto it : mpp) {
            if(it.second == maxFreq) cnt++;
        }
        return cnt*maxFreq;
    }
};

