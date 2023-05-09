public class Solution {
    public static int searchInsert(int [] arr, int m){
        // Write your code here.
        int idx = 0;
        for(int i=0; i<arr.length; i++) {
            if(arr[i] > m) {
                idx = i;
                break;
            } else {
                idx++;
            }
        }
        return idx;
    }
}