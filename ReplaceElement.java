import java.util.HashMap;

public class Solution {
    static int replaceElements(int []a) {
        // Write your code here.
        HashMap<Integer, Integer> mpp = new HashMap<>();
        for(int i : a) {
            if(mpp.containsKey(i)) {
                mpp.put(i, mpp.get(i)+1);
            } else {
                mpp.put(i, 1);
            }
        } 
        int odd = 0;
        for(int i : mpp.values()) {
            if(i%2 == 1) {
                odd++;
            }
        }
        int even = mpp.size() - odd;
        if(even == mpp.size()) {
            return 0;
        }
        if(odd%2 != 0) {
            return -1;
        }
        odd /= 2;
        return odd;
    }
}