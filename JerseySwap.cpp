import java.util.HashMap;
public class Solution {
    static int replaceElements(int []a) {
        // Write your code here.
        HashMap<Integer, Integer> mpp = new HashMap<>();
        for(int i = 0; i < a.length; i++) {
            if(mpp.containsKey(a[i])) {
                mpp.put(a[i], mpp.get(a[i])+1);
            } else {
                mpp.put(a[i], 1);
            }
        }
        int odds = 0;
        for(int i : mpp.values()) {
            if((i&1) == 1) {
                odds++;
            }
        }
        return (odds & 1) == 1 ? -1 : odds/2;
    }
}