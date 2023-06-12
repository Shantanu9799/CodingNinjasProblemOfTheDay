import java.util.ArrayList;

public class Solution {
	public static ArrayList<Integer> sortBinaryArray(ArrayList<Integer> arr, int n) {
		//	Write your code here.
		int cntZero = 0;
		int cntOne = 0;
		for(int i : arr) {
			if(i == 0) {
				cntZero++;
			} else {
				cntOne++;
			}
		}

		ArrayList<Integer> list = new ArrayList<>();
		while(cntZero-- > 0) {
			list.add(0);
		}
		while(cntOne-- > 0) {
			list.add(1);
		}
		return list;
	}
}
