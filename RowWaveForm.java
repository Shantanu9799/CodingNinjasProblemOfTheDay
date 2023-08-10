import java.util.*;
import java.io.*;
import java.util.ArrayList;

public class Solution {

	public static ArrayList<Integer> rowWaveForm(ArrayList<ArrayList<Integer>> mat) {

		// Write your code here
		ArrayList<Integer> list = new ArrayList<>();

		int n = mat.size();
		int m = mat.get(0).size();

		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				int startIdx = 0;
				while (startIdx < m) {
					list.add(mat.get(i).get(startIdx));
					startIdx++;
				}
			} else {
				int startIdx = m - 1;
				while(startIdx >= 0) {
					list.add(mat.get(i).get(startIdx));
					startIdx--;
				}
			}
		}
		return list;
	}
}