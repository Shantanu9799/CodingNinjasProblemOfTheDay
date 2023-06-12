import java.util.* ;
import java.io.*; 
public class Solution {	
	public static int minimumOperation(int[] arr, int n) {
		// Write your code here.
		HashMap<Integer, Integer> mpp = new HashMap<>();
		for(int i : arr) {
			if(mpp.containsKey(i)) {
				mpp.put(i, mpp.get(i)+1);
			} else {
				mpp.put(i, 1);
			}
		}
		int maxiOcc = 0;
		for(int i : mpp.values()) {
			maxiOcc = Math.max(i, maxiOcc);
		}
		return n-maxiOcc;
	}
}