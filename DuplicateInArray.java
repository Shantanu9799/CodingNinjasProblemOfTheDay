import java.util.ArrayList;

public class Solution {

	public static int findDuplicate(ArrayList<Integer> arr) {

		//    Write your code here.
		int xor = 0;
		for(int i : arr) {
			xor ^= i;
		}
		for(int i = 1; i<arr.size(); i++) {
			xor ^= i;
		}
		return xor;
	}
}