import java.util.* ;
import java.io.*; 
import java.util.ArrayList;;

public class Solution {
	public static ArrayList<Integer> diffSimCards(ArrayList<Integer> pack1, int n, ArrayList<Integer> pack2, int m) {
		// Write your code here.
		ArrayList<Integer> list  = new ArrayList<>();
		HashSet<Integer> set = new HashSet<>();
		for(int i : pack1) {
			set.add(i);
		}
		for(int i : pack2) {
			set.add(i);
		}
		list.add(set.size());
		HashMap<Integer, Integer> mpp1 = new HashMap<>();
		HashMap<Integer, Integer> mpp2 = new HashMap<>();
		for(int i : pack1) {
			if(mpp1.containsKey(i)) {
				mpp1.put(i, mpp1.get(i)+1);
			} else {
				mpp1.put(i, 1);
			}
		}
		for(int i : pack2) {
			if(mpp2.containsKey(i)) {
				mpp2.put(i, mpp2.get(i)+1);
			} else {
				mpp2.put(i, 1);
			}
		}
		int cnt = 0;
		for(int i : mpp1.keySet()) {
			if(mpp2.containsKey(i)) {
				int mini = Math.min(mpp1.get(i), mpp2.get(i));
				cnt += mini;
			}
		}
		list.add(cnt);
		return list;
	}
}