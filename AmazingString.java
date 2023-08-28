public class Solution {
	public static String amazingStrings(String first, String second, String third) {
		// Write your code here.
		int[] character = new int[26];
		for(int i = 0; i < first.length(); i++) {
			char ch = first.charAt(i);
			character[ch - 65]++;
		}
		for(int i = 0; i < second.length(); i++) {
			char ch = second.charAt(i);
			character[ch - 65]++;
		}
		for(int i = 0; i < third.length(); i++) {
			char ch = third.charAt(i);
			character[ch - 65]--;
		}
		int sum = 0;
		for(int i : character) {
			sum += i;
		}
		if(sum == 0) {
			return "YES";
		}
		return "NO";
	}
}