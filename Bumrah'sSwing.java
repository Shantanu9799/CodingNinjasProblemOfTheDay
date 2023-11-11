import java.util.HashMap;

public class Solution {
    static int maxVariation(int n, int []v) {
        // Write your code here.
        HashMap<Integer, Integer> mpp = new HashMap<>();
        for(int i = 0; i < n; i++) {
            if(mpp.containsKey(v[i])) {
                mpp.put(v[i], mpp.get(v[i])+1);
            } else {
                mpp.put(v[i], 1);
            }
        }
        int maxCount = mpp.size();
        for(int it : mpp.keySet()) {
            if(mpp.get(it) > 1) {
                if(!mpp.containsKey(-1 * it)) {
                    maxCount++;
                }
            }   
        }
        return maxCount;
    }
}