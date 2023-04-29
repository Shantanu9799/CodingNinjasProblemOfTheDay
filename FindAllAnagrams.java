import java.util.ArrayList;
import java.util.*;
public class Solution {
    public static ArrayList<Integer> findAnagramsIndices(String str, int n, String ptr, int m){
        // Write your code here.
        ArrayList<Integer> list = new ArrayList<>();
        ptr = sortedString(ptr);
        for(int i=0; i<=n-m; i++) {
            String s = str.substring(i, i+m);
            s = sortedString(s);
            if(ptr.equals(s)) {
                list.add(i);
            }
        }
        return list;
    }
    public static String sortedString(String s) {
        char[] array = s.toCharArray();
        Arrays.sort(array);
        return new String(array);
    }
}