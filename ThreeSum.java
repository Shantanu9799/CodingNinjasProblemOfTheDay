import java.util.* ;
import java.io.*; 
public class Solution {

	public static ArrayList<ArrayList<Integer>> findTriplets(int[] nums, int n, int K)  {

	    // Write your code here.
        Arrays.sort(nums);
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();
        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) {
                continue;
            }

            int j = i+1;
            int k = n-1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum > K) {
                    k--;
                } else if(sum < K) {
                    j++;
                } else {
                    ArrayList<Integer> tmp = new ArrayList<>();
                    tmp.add(nums[i]);
                    tmp.add(nums[j]);
                    tmp.add(nums[k]);
                    list.add(tmp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) {
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]) {
                        k--;
                    }
                }

            }

        }
        return list;

	}
}
